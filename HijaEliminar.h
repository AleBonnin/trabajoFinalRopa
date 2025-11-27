#ifndef HIJAELIMINAR_H
#define HIJAELIMINAR_H
#include "wxfb_project.h"
#include "stock.h"

class HijaEliminar : public VentanaEliminar {
	
private:
	Stock *m_stock;
protected:
	void ClickEliminar( wxCommandEvent& event )  override;
	
public:
	HijaEliminar(wxWindow *parent, Stock *stock);
	~HijaEliminar();
};

#endif

