#include <wx/image.h>
#include "Application.h"
#include "VentanaHija.h"
#include "HistorialVenta.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	m_stock = new Stock("datos.dat");
	m_historial = new HistorialVenta("ventas.dat");
	VentanaHija *win = new VentanaHija(m_stock, m_historial);
	win->Show();
	return true;
}

