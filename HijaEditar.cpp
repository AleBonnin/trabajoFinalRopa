#include "HijaEditar.h"

HijaEditar::HijaEditar(wxWindow *parent, Stock *stock) : VentanaEditar(parent), m_stock(stock) {
	
}

HijaEditar::~HijaEditar() {
	
}


void HijaEditar::ClickBotonCancelar( wxCommandEvent& event )  {
	event.Skip();
}

void HijaEditar::ClickBotonConfirmar( wxCommandEvent& event )  {
	event.Skip();
}

