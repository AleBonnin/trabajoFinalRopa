#include "VentanaHija.h"
#include <string>
#include "HijaAgregar.h"
#include "Stock.h"
#include "utils.h"
#include "HijaHistorial.h"
#include "HijaVender.h"
#include "HijaEliminar.h"
#include "HijaEditar.h"


VentanaHija::VentanaHija(Stock *stock, HistorialVenta *historial) 
	: VentanaPadre(nullptr), m_stock(stock), m_historial(historial) { 
	RefrescarInventario();
}


void VentanaHija::BotonEliminar( wxCommandEvent& event )  {
	HijaEliminar win(this, m_stock);
	if(win.ShowModal()==1){
		RefrescarInventario();
	}
}


void VentanaHija::RefrescarInventario(){
	if(m_inventario->GetNumberRows()!=0){
	m_inventario->DeleteRows(0,m_inventario->GetNumberRows());}
	for(unsigned i=0;i<m_stock->ObtenerCantidadStock();i++){
		Prenda& p = m_stock->VerPrenda(i);
		m_inventario->AppendRows();
		m_inventario->SetCellValue(i,0,p.VerDescripcion());
		m_inventario->SetCellValue(i,1,to_string(p.VerCodigo()));
		m_inventario->SetCellValue(i,2,p.VerTalle());
		m_inventario->SetCellValue(i,3,to_string(p.VerCantidad()));
		m_inventario->SetCellValue(i,4,floatToStringSinCeros(p.VerPrecioventa()));
		m_inventario->SetCellValue(i,5,floatToStringSinCeros(p.VerPreciocosto()));
		m_inventario->SetCellValue(i,6,to_string(p.VerDescuento()));
		
	}
}

void VentanaHija::BuscarCodigo(wxCommandEvent& event) {
	int codigoParaBuscar = -1;
	if (!m_TextoCodigo->IsEmpty()) {
		codigoParaBuscar = wxAtoi(m_TextoCodigo->GetValue());
	}
	string descParaBuscar = "";
	descParaBuscar = m_TextoDesc->GetValue().ToStdString();
	string talle = m_EleccionTalle->GetStringSelection().ToStdString();
	bool stockBajo = m_CheckStockBajo->IsChecked();
	vector<Prenda> resultados = m_stock->BuscarPrendasFiltro(codigoParaBuscar, descParaBuscar, talle, stockBajo);
	LlenarGrillaConLista(resultados);
}


void VentanaHija::ClickBotonAgregar( wxCommandEvent& event )  {
	HijaAgregar win(this, m_stock);
	if(win.ShowModal()==1){
		RefrescarInventario();
	}
}

void VentanaHija::ClickBotonHistorial( wxCommandEvent& event )  {
	HijaHistorial win(this, m_historial);
	win.ShowModal();
}

void VentanaHija::ClickBotonVender( wxCommandEvent& event )  {
	HijaVender win(this, m_stock, m_historial);
	if(win.ShowModal()==1){
		RefrescarInventario();
	}
}

void VentanaHija::ClickBotonEditar( wxCommandEvent& event )  {
	HijaEditar win(this, m_stock);
	if(win.ShowModal()==1){
		RefrescarInventario();
	}
}


void VentanaHija::LlenarGrillaConLista(vector<Prenda> lista) {
	if (m_inventario->GetNumberRows() > 0) {
		m_inventario->DeleteRows(0, m_inventario->GetNumberRows());
	}
	for(size_t i = 0; i < lista.size(); i++) {
		Prenda& p = lista[i];
		
		m_inventario->AppendRows(1);
		m_inventario->SetCellValue(i, 0, p.VerDescripcion());
		m_inventario->SetCellValue(i, 1, to_string(p.VerCodigo())); 
		m_inventario->SetCellValue(i, 2, p.VerTalle());
		m_inventario->SetCellValue(i, 3, to_string(p.VerCantidad()));
		m_inventario->SetCellValue(i, 4, floatToStringSinCeros(p.VerPrecioventa()));
		m_inventario->SetCellValue(i, 5, floatToStringSinCeros(p.VerPreciocosto()));
		m_inventario->SetCellValue(i, 6, to_string(p.VerDescuento()));
	}
}

void VentanaHija::BuscarStockBajo( wxCommandEvent& event )  {
	event.Skip();
}

