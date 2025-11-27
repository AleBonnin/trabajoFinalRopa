#ifndef STOCK_H
#define STOCK_H
#include "Prenda.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class Stock {
private:
	vector<Prenda> stock;
	
public:
	Stock(string nombre_archivo);
	Prenda &VerPrenda(int i);
	void AgregarPrenda(Prenda nueva);
	void QuitarPrenda(int posicion);
	size_t ObtenerCantidadStock();
	string VerTallePrenda(int i);
	string ObtenerCodOculto(int i);
	int VerCodigoDePrenda(int i);
	bool VerStockBajo(int i);
	int ObtenerCantidadPrenda(int i);
	float PrecioConCodOculto(string cod);
	void GuardarEnArchivo(std::string nombre_archivo);
	void CargarArchivo(std::string nombre_archivo);
	std::vector<Prenda>& ObtenerStock();
	Prenda* ObtenerPrendaPorCodigoOculto(const string& cod_oculto);
	void EliminarPorCodOculto(const string& codocu);
	vector<Prenda> BuscarPrendasFiltro(int codigoFiltro, string descripcionFiltro, string talleFiltro, bool soloStockBajo);
};
#endif
