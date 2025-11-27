#ifndef HIJAEDITAR_H
#define HIJAEDITAR_H
#include "wxfb_project.h"
#include "stock.h"

class HijaEditar : public VentanaEditar {
	
private:
	Stock *m_stock;
protected:
	void ClickBotonConfirmar( wxCommandEvent& event )  override;
	void ClickBotonCancelar( wxCommandEvent& event )  override;
	
public:
	HijaEditar(wxWindow *parent, Stock *stock);
	~HijaEditar();
};

#endif

