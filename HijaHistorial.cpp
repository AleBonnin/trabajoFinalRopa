#include "HijaHistorial.h"
#include "utils.h"

HijaHistorial::HijaHistorial(wxWindow *parent, HistorialVenta *historial)
	: VentanaHistorial2(parent), m_historial(historial) { 
	wxDateTime fecha_por_defecto(1, wxDateTime::Jan, 2000); 
	m_fecha_desde->SetValue(fecha_por_defecto);
}

HijaHistorial::~HijaHistorial() {
	
}

void HijaHistorial::ClickBuscarHistorial( wxCommandEvent& event )  {
	string texto_libre;
	int numven;
	int documento;
	string talle;
	
	if(m_desc_cod->IsEmpty()){texto_libre="";} else {texto_libre = m_desc_cod->GetValue().ToStdString();}
	if(m_numven->IsEmpty()){numven=-1;} else {numven = stoi(m_numven->GetValue().ToStdString());}
	if(m_dni->IsEmpty()){documento=-1;} else {documento = stoi(m_dni->GetValue().ToStdString());}
	if(m_talles->GetValue()==""){talle="";} else {talle = m_talles->GetValue().ToStdString();}
	int fecha_desde = ConvertirFechaAEntero(m_fecha_desde->GetValue());
	int fecha_hasta = ConvertirFechaAEntero(m_fecha_hasta->GetValue());
	vector<Venta> resultados = m_historial->BuscarVentas(fecha_desde, fecha_hasta, texto_libre, numven, documento, talle);
	
	if(m_grillahist->GetNumberRows()!=0){
		m_grillahist->DeleteRows(0,m_grillahist->GetNumberRows());}
	for(unsigned i=0;i<resultados.size();i++){
		m_grillahist->AppendRows();
		m_grillahist->SetCellValue(i,0,to_string(resultados[i].VerCodigo()));
		m_grillahist->SetCellValue(i,1,(resultados[i].VerDescripcion()));
		m_grillahist->SetCellValue(i,2,(resultados[i].VerTalle()));
		m_grillahist->SetCellValue(i,3,floatToStringSinCeros(resultados[i].VerTotal()));
		m_grillahist->SetCellValue(i,4,floatToStringSinCeros(resultados[i].VerPrecioUnidad()));
		m_grillahist->SetCellValue(i,5,to_string(resultados[i].VerCantidad()));
		m_grillahist->SetCellValue(i,6,to_string(resultados[i].VerFecha()));
		m_grillahist->SetCellValue(i,7,to_string(resultados[i].VerDocumento()));
		m_grillahist->SetCellValue(i,8,to_string(resultados[i].VerCodigoVenta()));
	}
	
	int cantidad_filas = m_grillahist->GetNumberRows();
	float cantidad_sumada = 0;
	for(int i=0; i<cantidad_filas; i++){
		cantidad_sumada+=stof(m_grillahist->GetCellValue(i,3).ToStdString());
	}
	m_totalsumado->SetValue(floatToStringSinCeros(cantidad_sumada));
	}

