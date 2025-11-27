#include "HijaEliminar.h"
#include <wx/msgdlg.h>
#include "VentanaHija.h"
#include "Stock.h"
#include "utils.h"
#include "Prenda.h"


HijaEliminar::HijaEliminar(wxWindow *parent, Stock *stock) : VentanaEliminar(parent), m_stock(stock) {
	
}

HijaEliminar::~HijaEliminar() {
	
}


void HijaEliminar::ClickEliminar( wxCommandEvent& event )  {
	string cod = m_Codigo->GetValue().ToStdString();
	string validacion = "";
	if(m_Codigo->IsEmpty()){validacion+="Debe ingresar un código\n\n";}
	bool marcado=false;
	if(m_CheckS->IsChecked()){marcado=true;}
	if(m_CheckM->IsChecked()){marcado=true;}
	if(m_CheckL->IsChecked()){marcado=true;}
	if(m_CheckXL->IsChecked()){marcado=true;}
	if(m_CheckXXL->IsChecked()){marcado=true;}
	if(marcado==false){validacion+="Debe seleccionar mínimo un talle\n\n";}
	if(validacion!=""){validacion.erase(validacion.size() - 2);
	wxMessageBox(validacion); return;}
	
	if(m_CheckS->IsChecked()){m_stock->EliminarPorCodOculto(cod+"S");}
	if(m_CheckM->IsChecked()){m_stock->EliminarPorCodOculto(cod+"M");}
	if(m_CheckL->IsChecked()){m_stock->EliminarPorCodOculto(cod+"L");}
	if(m_CheckXL->IsChecked()){m_stock->EliminarPorCodOculto(cod+"XL");}
	if(m_CheckXXL->IsChecked()){m_stock->EliminarPorCodOculto(cod+"XXL");}
	m_stock->GuardarEnArchivo("datos.dat");
	EndModal(1);
}

