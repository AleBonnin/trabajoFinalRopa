#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "stock.h"
#include "HistorialVenta.h"

class Application : public wxApp {
	Stock *m_stock;
	HistorialVenta *m_historial;
public:
	virtual bool OnInit();
};

#endif
