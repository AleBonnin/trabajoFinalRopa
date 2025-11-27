#include "HijaVender.h"
#include "stock.h"
#include "utils.h"
#include <wx/msgdlg.h>
#include "HistorialVenta.h"
#include <vector>
#include <wx/datetime.h>
#include "VentanaHija.h"
using namespace std;



HijaVender::HijaVender(wxWindow *parent, Stock *stock, HistorialVenta *historial) : VentanaVender(parent), m_stock(stock), m_historial(historial) {
	
}

HijaVender::~HijaVender() {
	
}

void HijaVender::ClickBotonAgregarVenta( wxCommandEvent& event )  {
	wxString codigo = m_CodVen->GetValue();
	wxString cantidad = m_CantVen->GetValue();
	wxString talle = m_TalleVen->GetStringSelection();
	
	if (codigo.IsEmpty() || talle.IsEmpty() || cantidad.IsEmpty()) {
		wxMessageBox("Debe completar Código, Talle y Cantidad.");
		return;
	}
	
	if (!cantidad.IsNumber() || stoi(cantidad.ToStdString()) <= 0) {
		wxMessageBox("La cantidad debe ser un número entero positivo.");
		return;
	}
	
	string codigo_oculto = (codigo+talle).ToStdString();
	
	Prenda* p_stock = m_stock->ObtenerPrendaPorCodigoOculto(codigo_oculto);
	
	if (p_stock == nullptr) {
		wxMessageBox("Error: No existe ninguna prenda con el Código/Talle ingresado.");
		m_CodVen->Clear();
		m_TalleVen->SetSelection(0); 
		return;
	}

	float montoaux = m_stock->PrecioConCodOculto(codigo_oculto) * stoi(cantidad.ToStdString());
	
	string monto = floatToStringSinCeros(montoaux);
	
	int fila = m_GrillaVentas->GetNumberRows();
	m_GrillaVentas->AppendRows(1);
	
	m_GrillaVentas->SetCellValue(fila, 0, codigo);      
	m_GrillaVentas->SetCellValue(fila, 1, talle);       
	m_GrillaVentas->SetCellValue(fila, 2, cantidad); 
	m_GrillaVentas->SetCellValue(fila, 3, monto);     

	m_CodVen->Clear();
	m_CantVen->Clear();
	m_TalleVen->SetSelection(0);
}

void HijaVender::ClickBotonCancelarVenta( wxCommandEvent& event )  {
	event.Skip();
}

void HijaVender::ClickBotonVender( wxCommandEvent& event )  {
	int num_filas = m_GrillaVentas->GetNumberRows();
	
	if (num_filas == 0) {
		wxMessageBox("No hay artículos agregados a la venta.");
		return;
	}
	
	int a_documento = stoi(m_ClieDNI->GetValue().ToStdString());
	
	if (m_ClieDNI->GetValue().IsEmpty()) {
		wxMessageBox("Debe ingresar el número de Documento (DNI).");
		m_ClieDNI->SetFocus();
		return;
	}
	
	if (!(m_ClieDNI->GetValue().IsNumber()) || a_documento <= 0) {
		wxMessageBox("El DNI debe ser un número entero positivo.");
		return;
	}
	
	int a_codigo_transaccion = m_historial->GenerarNuevoCodigoVenta();
	m_historial->GuardarContador();	
	int a_fecha_venta = ConvertirFechaAEntero(m_fecha->GetValue());
	
	
	vector<Venta> ventas_a_registrar;
	bool stock_insuficiente = false;
	
	for(int i=0; i < num_filas; ++i){
		int a_codigo = stoi((m_GrillaVentas->GetCellValue(i,0)).ToStdString());
		string a_talle = (m_GrillaVentas->GetCellValue(i,1)).ToStdString();
		int a_cantidad = stoi((m_GrillaVentas->GetCellValue(i,2)).ToStdString());
		int a_total = stof((m_GrillaVentas->GetCellValue(i,3)).ToStdString());
		string a_cod_oculto = (to_string(a_codigo)) + a_talle;
		
		Prenda* p_stock = m_stock->ObtenerPrendaPorCodigoOculto(a_cod_oculto);
		
		if (p_stock == nullptr || p_stock->VerCantidad() < a_cantidad) {
			stock_insuficiente = true;
			wxMessageBox("Stock insuficiente para: " + a_cod_oculto + ". Venta cancelada.");
			break;
		}
		
		float a_precio_unitario = a_total / a_cantidad;
		
		string a_descripcion = ((m_stock->ObtenerPrendaPorCodigoOculto(a_cod_oculto))->VerDescripcion());
		
		
		Venta nueva_venta (a_cod_oculto, a_cantidad, a_precio_unitario, a_fecha_venta, a_documento, a_total, a_descripcion, a_codigo_transaccion, a_codigo, a_talle);
		ventas_a_registrar.push_back(nueva_venta);
	}
	
	for (Venta& venta_item : ventas_a_registrar) {
		string cod_oculto_item = venta_item.VerCodigoOculto();
		int cantidad_a_restar = venta_item.VerCantidad();
		
		Prenda* p_stock = m_stock->ObtenerPrendaPorCodigoOculto(cod_oculto_item); 
		
		if (p_stock) {
			
			p_stock->ModificarCantidad(p_stock->VerCantidad() - cantidad_a_restar);
			
			m_historial->AgregarVenta(venta_item);
			
		}
	}
	m_stock->GuardarEnArchivo("datos.dat");
	
	EndModal(1);
}

