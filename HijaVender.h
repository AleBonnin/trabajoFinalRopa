#ifndef HIJAVENDER_H
#define HIJAVENDER_H
#include "wxfb_project.h"
#include "stock.h"
#include "HistorialVenta.h"

class HijaVender : public VentanaVender {
	
private:
	Stock *m_stock;
	HistorialVenta *m_historial;
protected:
	void ClickBotonAgregarVenta( wxCommandEvent& event )  override;
	void ClickBotonCancelarVenta( wxCommandEvent& event )  override;
	void ClickBotonVender( wxCommandEvent& event )  override;
	
public:
	HijaVender(wxWindow *parent, Stock *stock, HistorialVenta *historial);
	~HijaVender();
};

#endif

