#include "stock.h"
#include "utils.h"

Stock::Stock(string nombre_archivo){
	ifstream archivo(nombre_archivo, ios::binary | ios::out | ios::in);
	if (!archivo) {
		cerr << "No se pudo abrir el archivo" << endl;
		return;
	}
	
	int codaux, cantidadaux, descuentoaux;
	float precioventaaux, preciocostoaux;
	string descripaux, talleaux, coloraux;
	
	while (archivo.read(reinterpret_cast<char*>(&codaux), sizeof(int)) &&
		   archivo.read(reinterpret_cast<char*>(&cantidadaux), sizeof(int)) &&
		   archivo.read(reinterpret_cast<char*>(&precioventaaux), sizeof(float)) &&
		   archivo.read(reinterpret_cast<char*>(&preciocostoaux), sizeof(float)) &&
		   archivo.read(reinterpret_cast<char*>(&descuentoaux), sizeof(int))) {
		descripaux = LeerString(archivo);
		talleaux = LeerString(archivo);
		
		Prenda aux(codaux, cantidadaux, descripaux, precioventaaux, preciocostoaux, talleaux, descuentoaux);
		stock.push_back(aux);
	}
		   archivo.close();
}
	
Prenda &Stock::VerPrenda(int i){
	return stock[i];
}

void Stock::AgregarPrenda(Prenda nueva) {
	stock.push_back(nueva);
}

void Stock::QuitarPrenda(int posicion) {
	auto it = stock.begin()+posicion;
	stock.erase(it);
}

size_t Stock::ObtenerCantidadStock() {
	return stock.size();
}

int Stock::VerCodigoDePrenda(int i){
	return stock[i].VerCodigo();
}

string Stock::VerTallePrenda(int i){
	return stock[i].VerTalle();
}

string Stock::ObtenerCodOculto(int i){
	return stock[i].VerCodOculto();
}


int Stock::ObtenerCantidadPrenda(int i){
	return stock[i].VerCantidad();
}

float Stock::PrecioConCodOculto(string cod){
	size_t indice;
	for(size_t i=0; i<stock.size();i++){
		if(stock[i].VerCodOculto()==cod){
			indice=i;
			break;
		}
	}
	return stock[indice].VerPrecioventa();
}

void Stock::GuardarEnArchivo(std::string nombre_archivo) {
	ofstream archivo(nombre_archivo, ios::binary | ios::out | ios::in | ios::trunc);
	if (!archivo) {
		cerr << "No se pudo abrir el archivo" << endl;
		return;
	}
	for (Prenda& prenda : stock) {
		int codigo = prenda.VerCodigo();
		int cantidad = prenda.VerCantidad();
		float precioventa = prenda.VerPrecioventa();
		float preciocosto = prenda.VerPreciocosto();
		int descuento = prenda.VerDescuento();
		archivo.write(reinterpret_cast<const char*>(&codigo), sizeof(int));
		archivo.write(reinterpret_cast<const char*>(&cantidad), sizeof(int));
		archivo.write(reinterpret_cast<const char*>(&precioventa), sizeof(float));
		archivo.write(reinterpret_cast<const char*>(&preciocosto), sizeof(float));
		archivo.write(reinterpret_cast<const char*>(&descuento), sizeof(int));
		
		GuardarString(archivo, prenda.VerDescripcion());
		GuardarString(archivo, prenda.VerTalle());
	}
	archivo.close();
}

void Stock::CargarArchivo(std::string nombre_archivo) {
	ifstream archivo(nombre_archivo, ios::binary | ios::out | ios::in);
	if (!archivo) {
		cerr << "No se pudo abrir el archivo" << endl;
		return;
	}
	
	int codaux, cantidadaux, descuentoaux;
	float precioventaaux, preciocostoaux;
	string descripaux, talleaux, coloraux;
	
	while (archivo.read(reinterpret_cast<char*>(&codaux), sizeof(int)) &&
		   archivo.read(reinterpret_cast<char*>(&cantidadaux), sizeof(int)) &&
		   archivo.read(reinterpret_cast<char*>(&precioventaaux), sizeof(float)) &&
		   archivo.read(reinterpret_cast<char*>(&preciocostoaux), sizeof(float)) &&
		   archivo.read(reinterpret_cast<char*>(&descuentoaux), sizeof(int))) {
		descripaux = LeerString(archivo);
		talleaux = LeerString(archivo);
		
		Prenda aux(codaux, cantidadaux, descripaux, precioventaaux, preciocostoaux, talleaux, descuentoaux);
		stock.push_back(aux);
	}
		   archivo.close();
}


std::vector<Prenda>& Stock::ObtenerStock() {
	return stock;
}


Prenda* Stock::ObtenerPrendaPorCodigoOculto(const std::string& cod_oculto_buscado) {
	for (size_t i = 0; i < stock.size(); ++i) {
		Prenda& p = stock[i];
		

		std::string cod_prenda_actual = std::to_string(p.VerCodigo()) + p.VerTalle();

		if (cod_prenda_actual == cod_oculto_buscado) {
			return &p; 
		}
	}
	
	return nullptr; 
}


void Stock::EliminarPorCodOculto(const string& codocu){
	for(size_t i=0; i<stock.size();++i){
		Prenda &p = stock[i];
		
		if(codocu == p.VerCodOculto()){
			stock.erase(stock.begin()+i);
			break;
		}
	}
}

vector<Prenda> Stock::BuscarPrendasFiltro(int codigoFiltro, string descripcionFiltro, string talleFiltro, bool soloStockBajo) {
	vector<Prenda> resultados;
	
	for(size_t i = 0; i < stock.size(); i++) {
		Prenda& p = stock[i];
		bool coincide = true;
		
		if (codigoFiltro != -1) {
			if (p.VerCodigo() != codigoFiltro) {
				coincide = false;
			}
		}
		if (coincide && descripcionFiltro.length() > 0) {
			if (p.VerDescripcion().find(descripcionFiltro) == string::npos) {
				coincide = false;
			}
		}
		if (coincide && !talleFiltro.empty()) {
			if (p.VerTalle() != talleFiltro) {
				coincide = false;
			}
		}
		
		if (coincide && soloStockBajo) {
			if (p.VerCantidad() > 3) {
				coincide = false;
			}
		}
		
		if (coincide) {
			resultados.push_back(p);
		}
	}
	return resultados;
}
