#ifndef HISTORIALVENTA_H
#define HISTORIALVENTA_H
#include "wxfb_project.h"
#include "venta.h"
#include <string>
using namespace std;

class HistorialVenta {
private:
	string m_nombreArchivo;
	
	int m_ultimo_codigo_venta=0;
	
public:
	HistorialVenta(const string& archivo): m_nombreArchivo(archivo) {
		CargarContador();
	}
	
	std::vector<Venta> BuscarVentas(int fechaDesde, int fechaHasta, string textoLibre, int codVenta, int documento, string talle);
	
	void AgregarVenta(Venta& nuevaVenta);
	
	int GenerarNuevoCodigoVenta();
	
	int ObtenerUltimoCodigoVenta();
	
	void CargarContador();
	void GuardarContador();
};


#endif
