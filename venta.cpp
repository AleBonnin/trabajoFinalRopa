#include "Venta.h"
#include <string>
using namespace std;

Venta::Venta(string c_cod, int c_cantidad, float c_preciounidad, int c_fecha, int c_documento, int c_total, string c_desc, int codven, int cod, string c_talle)
	: cod_oculto(c_cod), cantidad(c_cantidad), preciounidad(c_preciounidad), fecha(c_fecha), documento(c_documento), total(c_total), desc(c_desc), cod_venta (codven), codigo (cod), talle(c_talle) {
	total = c_cantidad * c_preciounidad;
}

float Venta::VerTotal() { return total; }
int Venta::VerFecha() { return fecha; }
string Venta::VerCodigoOculto() const { return cod_oculto; }
int Venta::VerCantidad() const { return cantidad; }
float Venta::VerPrecioUnidad() { return preciounidad; }
string Venta::VerDescripcion() { return desc; }
int Venta::VerCodigo() { return codigo; }
int Venta::VerCodigoVenta() { return cod_venta; }
string Venta::VerTalle(){ return talle; }
int Venta::VerDocumento(){ return documento; }
