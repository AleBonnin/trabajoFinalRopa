#ifndef VENTA_H
#define VENTA_H
#include <string>
using namespace std;

class Venta {
private:
	string cod_oculto;
	int cantidad;
	float preciounidad;
	int fecha;
	int documento;
	int total;
	string desc;
	int cod_venta;
	int codigo;
	string talle; 
	
public:
	Venta(string c_cod, int c_cantidad, float c_preciounidad, int c_fecha, int c_documento, int c_total, string c_desc, int codven, int cod, string c_talle);
	float VerTotal();
	int VerFecha();
	string VerCodigoOculto() const;
	int VerCantidad() const;
	float VerPrecioUnidad();
	string VerDescripcion();
	int VerCodigo();
	int VerCodigoVenta();
	string VerTalle();
	int VerDocumento();
};

#endif
