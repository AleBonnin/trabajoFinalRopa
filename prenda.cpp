#include "Prenda.h"
#include <string>
using namespace std;

Prenda::Prenda(int c_cod, int c_cantidad, std::string c_descrip, float c_precioventa, float c_preciocosto,
			   std::string c_talle, int c_descuento)
	: cod(c_cod), cantidad(c_cantidad), descrip(c_descrip), precioventa(c_precioventa),
	preciocosto(c_preciocosto), talle(c_talle), descuento(c_descuento) {
		 cod_oculto = to_string(cod) + talle; 
}

int Prenda::VerCodigo() { return cod; }
int Prenda::VerCantidad() { return cantidad; }
std::string Prenda::VerDescripcion() { return descrip; }
std::string Prenda::VerCodOculto() { return cod_oculto; }
float Prenda::VerPrecioventa() { return precioventa; }
float Prenda::VerPreciocosto() { return preciocosto; }
std::string Prenda::VerTalle() { return talle; }
int Prenda::VerDescuento() { return descuento; }

void Prenda::ModificarDescuento(int nuevo_desc) { descuento = nuevo_desc; }
void Prenda::ModificarPrecioventa(float nuevo_precio) { precioventa = nuevo_precio; }
void Prenda::ModificarCantidad(int nueva_cantidad) { cantidad = nueva_cantidad; }
void Prenda::ModificarTalle(std::string nuevo_talle) { talle = nuevo_talle; }
void Prenda::ModificarCodigo(int nuevo_cod) { cod = nuevo_cod; }
void Prenda::ModificarPreciocosto(float nuevo_costo) { preciocosto = nuevo_costo; }
void Prenda::ModificarDescripcion(std::string nueva_desc) { descrip = nueva_desc; }

