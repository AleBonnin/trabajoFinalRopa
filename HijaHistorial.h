#ifndef HIJAHISTORIAL_H
#define HIJAHISTORIAL_H
#include "wxfb_project.h"
#include "HistorialVenta.h"

class HijaHistorial : public VentanaHistorial2 {
	
private:
	HistorialVenta *m_historial;
protected:
	void ClickBuscarHistorial( wxCommandEvent& event )  override;
	
public:
	HijaHistorial(wxWindow *parent, HistorialVenta *historial); // <--- ¡QUITAR '=NULL'!
	~HijaHistorial();
};

#endif

