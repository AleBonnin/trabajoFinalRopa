#ifndef VENTANAHIJA_H
#define VENTANAHIJA_H
#include "wxfb_project.h"
#include "stock.h"
#include "HistorialVenta.h"

class VentanaHija : public VentanaPadre {
	
private:
	Stock *m_stock;
	HistorialVenta *m_historial;
	void LlenarGrillaConLista(vector<Prenda> lista);
protected:
	void BuscarStockBajo( wxCommandEvent& event )  override;
	void ClickBotonEditar( wxCommandEvent& event )  override;
	void ClickBotonVender( wxCommandEvent& event )  override;
	void ClickBotonHistorial( wxCommandEvent& event )  override;
	void ClickBotonAgregar( wxCommandEvent& event )  override;
	void BuscarCodigo( wxCommandEvent& event )  override;
	void BotonEliminar( wxCommandEvent& event )  override;
public:
	void RefrescarInventario();
	VentanaHija(Stock *stock, HistorialVenta *historial);
};

#endif

