#ifndef PRENDA_H
#define PRENDA_H
#include <iostream>
#include <string>
using namespace std;

class Prenda {
private:
	int cod;
	int cantidad;
	string descrip;
	float precioventa;
	float preciocosto;
	string talle;
	int descuento;
	string cod_oculto;
		
public:
	Prenda(int c_cod, int c_cantidad, std::string c_descrip, float c_precioventa, float c_preciocosto,
		   std::string c_talle, int c_descuento);
	
	int VerCodigo();
	int VerCantidad();
	std::string VerDescripcion();
	std::string VerCodOculto();
	float VerPrecioventa();
	float VerPreciocosto();
	std::string VerTalle();
	bool VerStockBajo();
	int VerDescuento();
	void ModificarDescuento(int nuevo_desc);
	void ModificarPrecioventa(float nuevo_precio);
	void ModificarCantidad(int nueva_cantidad);
	void ModificarTalle(std::string nuevo_talle);
	void ModificarColor(std::string nuevo_color);
	void ModificarCodigo(int nuevo_cod);
	void ModificarPreciocosto(float nuevo_costo);
	void ModificarDescripcion(std::string nueva_desc);
};

#endif
