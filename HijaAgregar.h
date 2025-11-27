#ifndef HIJAAGREGAR_H
#define HIJAAGREGAR_H
#include "wxfb_project.h"
#include "Stock.h"

class HijaAgregar : public VentanaAgregar {
	
private:
	Stock *m_stock;
protected:
	void MarcarM( wxCommandEvent& event )  override;
	void MarcarL( wxCommandEvent& event )  override;
	void MarcarXL( wxCommandEvent& event )  override;
	void MarcarXXL( wxCommandEvent& event )  override;
	void MarcarS( wxCommandEvent& event )  override;
	void ClickBotonAceptar( wxCommandEvent& event )  override;
	void ClickBotonCancelar( wxCommandEvent& event )  override;
	
public:
	HijaAgregar(wxWindow *parent, Stock *stock);
	~HijaAgregar();
};

#endif

