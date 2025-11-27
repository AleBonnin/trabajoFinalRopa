#include "HijaAgregar.h"
#include "wx_to_std.h"
#include <string>
#include <wx/msgdlg.h>

HijaAgregar::HijaAgregar(wxWindow *parent, Stock *stock) : VentanaAgregar(parent), m_stock(stock) {
	
}

void HijaAgregar::ClickBotonAceptar( wxCommandEvent& event )  {
	string validacion="";
	if(m_Descr->GetValue()==""){validacion+="Rellene la casilla de descripción\n\n";}
	if(m_Cod->GetValue()==""){validacion+="Rellene la casilla de código\n\n";}
	if((m_Cod->GetValue().ToStdString()).find_first_not_of("0123456789")!=string::npos){validacion+="No se pueden ingresar letras en código\n\n";}
	if(m_CantS->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or m_CantM->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or 
		m_CantL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or m_CantXL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or
		m_CantXXL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos){validacion+="No se pueden ingresar letras en cantidad\n\n";}
	if(m_PreVenS->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or m_PreVenM->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or 
	   m_PreVenL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or m_PreVenXL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or
	   m_PreVenXXL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos){validacion+="No se pueden ingresar letras en precio de venta\n\n";}
	if(m_PreCosS->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or m_PreCosM->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or 
	   m_PreCosL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or m_PreCosXL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or
	   m_PreCosXXL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos){validacion+="No se pueden ingresar letras en costo\n\n";}
	if(m_DescuS->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or m_DescuM->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or 
	   m_DescuL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or m_DescuXL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos or
	   m_DescuXXL->GetValue().ToStdString().find_first_not_of("0123456789")!=string::npos){validacion+="No se pueden ingresar letras en descuento\n\n";}
	if(CheckS->IsChecked()){if(m_CantS->GetValue()=="" or m_PreVenS->GetValue()=="" or m_PreCosS->GetValue()=="" or m_DescuS->GetValue()==""){validacion+="Datos insuficientes en talle S\n\n";}}
	if(CheckM->IsChecked()){if(m_CantM->GetValue()=="" or m_PreVenM->GetValue()=="" or m_PreCosM->GetValue()=="" or m_DescuM->GetValue()==""){validacion+="Datos insuficientes en talle M\n\n";}}
	if(CheckL->IsChecked()){if(m_CantL->GetValue()=="" or m_PreVenL->GetValue()=="" or m_PreCosL->GetValue()=="" or m_DescuL->GetValue()==""){validacion+="Datos insuficientes en talle L\n\n";}}
	if(CheckXL->IsChecked()){if(m_CantXL->GetValue()=="" or m_PreVenXL->GetValue()=="" or m_PreCosXL->GetValue()=="" or m_DescuXL->GetValue()==""){validacion+="Datos insuficientes en talle XL\n\n";}}
	if(CheckXXL->IsChecked()){if(m_CantXXL->GetValue()=="" or m_PreVenXXL->GetValue()=="" or m_PreCosXXL->GetValue()=="" or m_DescuXXL->GetValue()==""){validacion+="Datos insuficientes en talle XXL\n\n";}}
	if(!CheckS->IsChecked() and !CheckM->IsChecked() and !CheckL->IsChecked() and !CheckXL->IsChecked() and !CheckXXL->IsChecked()){validacion+="Debe seleccionar un talle como mínimo\n\n";}
	
	if(validacion==""){
	string descrip = m_Descr->GetValue().ToStdString();	
	int cod = stoi(m_Cod->GetValue().ToStdString());
	if(CheckS->IsChecked()){
		int cantS = stoi(m_CantS->GetValue().ToStdString());
		float preciovS = stof(m_PreVenS->GetValue().ToStdString());
		float preciocS = stof(m_PreCosS->GetValue().ToStdString());
		int descuS = stoi(m_DescuS->GetValue().ToStdString());
		Prenda NuevaS(cod,cantS,descrip,preciovS,preciocS,"S",descuS);
		m_stock->AgregarPrenda(NuevaS);
	}
	if(CheckM->IsChecked()){
		int cantM = stoi(m_CantM->GetValue().ToStdString());
		float preciovM = stof(m_PreVenM->GetValue().ToStdString());
		float preciocM = stof(m_PreCosM->GetValue().ToStdString());
		int descuM = stoi(m_DescuM->GetValue().ToStdString());
		Prenda NuevaM(cod,cantM,descrip,preciovM,preciocM,"M",descuM);
		m_stock->AgregarPrenda(NuevaM);
	}
	if(CheckL->IsChecked()){
		int cantL = stoi(m_CantL->GetValue().ToStdString());
		float preciovL = stof(m_PreVenL->GetValue().ToStdString());
		float preciocL = stof(m_PreCosL->GetValue().ToStdString());
		int descuL = stoi(m_DescuL->GetValue().ToStdString());
		Prenda NuevaL(cod,cantL,descrip,preciovL,preciocL,"L",descuL);
		m_stock->AgregarPrenda(NuevaL);
	}
	if(CheckXL->IsChecked()){
		int cantXL = stoi(m_CantXL->GetValue().ToStdString());
		float preciovXL = stof(m_PreVenXL->GetValue().ToStdString());
		float preciocXL = stof(m_PreCosXL->GetValue().ToStdString());
		int descuXL = stoi(m_DescuXL->GetValue().ToStdString());
		Prenda NuevaXL(cod,cantXL,descrip,preciovXL,preciocXL,"XL",descuXL);
		m_stock->AgregarPrenda(NuevaXL);
	}
	if(CheckXXL->IsChecked()){
		int cantXXL = stoi(m_CantXXL->GetValue().ToStdString());
		float preciovXXL = stof(m_PreVenXXL->GetValue().ToStdString());
		float preciocXXL = stof(m_PreCosXXL->GetValue().ToStdString());
		int descuXXL = stoi(m_DescuXXL->GetValue().ToStdString());
		Prenda NuevaXXL(cod,cantXXL,descrip,preciovXXL,preciocXXL,"XXL",descuXXL);
		m_stock->AgregarPrenda(NuevaXXL);
	}	
	
	m_stock->GuardarEnArchivo("datos.dat");
	EndModal(1);
	} else {
		validacion.erase(validacion.size() - 2);
		wxMessageBox(validacion); return;
	}
}

void HijaAgregar::ClickBotonCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

HijaAgregar::~HijaAgregar() {
	
}

void HijaAgregar::MarcarS( wxCommandEvent& event )  {
	bool activo = CheckS->IsChecked();
	m_CantS->Enable(activo);
	m_PreVenS->Enable(activo);
	m_PreCosS->Enable(activo);
	m_DescuS->Enable(activo);
	if (!activo) {
		m_CantS->Clear();
		m_PreVenS->Clear();
		m_PreCosS->Clear();
		m_DescuS->Clear();
	}
}

void HijaAgregar::MarcarM( wxCommandEvent& event )  {
	bool activo = CheckM->IsChecked();
	m_CantM->Enable(activo);
	m_PreVenM->Enable(activo);
	m_PreCosM->Enable(activo);
	m_DescuM->Enable(activo);
	if (!activo) {
		m_CantM->Clear();
		m_PreVenM->Clear();
		m_PreCosM->Clear();
		m_DescuM->Clear();
	}
}

void HijaAgregar::MarcarL( wxCommandEvent& event )  {
	bool activo = CheckL->IsChecked();
	m_CantL->Enable(activo);
	m_PreVenL->Enable(activo);
	m_PreCosL->Enable(activo);
	m_DescuL->Enable(activo);
	if (!activo) {
		m_CantL->Clear();
		m_PreVenL->Clear();
		m_PreCosL->Clear();
		m_DescuL->Clear();
	}
}

void HijaAgregar::MarcarXL( wxCommandEvent& event )  {
	bool activo = CheckXL->IsChecked();
	m_CantXL->Enable(activo);
	m_PreVenXL->Enable(activo);
	m_PreCosXL->Enable(activo);
	m_DescuXL->Enable(activo);
	if (!activo) {
		m_CantXL->Clear();
		m_PreVenXL->Clear();
		m_PreCosXL->Clear();
		m_DescuXL->Clear();
	}
}

void HijaAgregar::MarcarXXL( wxCommandEvent& event )  {
	bool activo = CheckXXL->IsChecked();
	m_CantXXL->Enable(activo);
	m_PreVenXXL->Enable(activo);
	m_PreCosXXL->Enable(activo);
	m_DescuXXL->Enable(activo);
	if (!activo) {
		m_CantXXL->Clear();
		m_PreVenXXL->Clear();
		m_PreCosXXL->Clear();
		m_DescuXXL->Clear();
	}
}

