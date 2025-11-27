#include <fstream>
#include <string>
#include "HistorialVenta.h"
#include "venta.h"
using namespace std;



void HistorialVenta::CargarContador() {
	std::ifstream archivo("contador_ventas.dat", std::ios::binary | std::ios::in);
	
	if (archivo.is_open()) {
		archivo.read(reinterpret_cast<char*>(&m_ultimo_codigo_venta), sizeof(int));
		archivo.close();
	} else {
		m_ultimo_codigo_venta = 0; 
	}
}

void HistorialVenta::GuardarContador() {
	std::ofstream archivo("contador_ventas.dat", std::ios::binary | std::ios::out | std::ios::trunc);
	
	if (archivo.is_open()) {
		archivo.write(reinterpret_cast<const char*>(&m_ultimo_codigo_venta), sizeof(int));
		archivo.close();
	} else {
		cerr << "Error: No se pudo guardar el archivo de contador." << std::endl;
	}
}



int HistorialVenta::GenerarNuevoCodigoVenta() {
	m_ultimo_codigo_venta++; 
	
	return m_ultimo_codigo_venta;
}


int HistorialVenta::ObtenerUltimoCodigoVenta() {
	return m_ultimo_codigo_venta;
}



struct VentaBinaria {
	int cantidad;
	float precio;
	int fecha;
	float total;
	int cod_venta;
	int cod_item; 
	char cod_oculto[20];
	char descripcion[50];
	int documento;
	char talle[5];
};

void HistorialVenta::AgregarVenta(Venta& nuevaVenta){
	ofstream archivo(m_nombreArchivo, ios::binary | ios::out | ios::app);
	
	if (!archivo) {
		return;
	}
	
	VentaBinaria registro;
	// Limpiamos la memoria de la estructura para evitar basura en los espacios vacíos
	//memset(&registro, 0, sizeof(VentaBinaria));
	
	registro.cantidad = nuevaVenta.VerCantidad();
	registro.precio = nuevaVenta.VerPrecioUnidad();
	registro.fecha = nuevaVenta.VerFecha();
	registro.total = nuevaVenta.VerTotal();
	registro.cod_venta = nuevaVenta.VerCodigoVenta();
	registro.cod_item = nuevaVenta.VerCodigo();
	registro.documento = nuevaVenta.VerDocumento();
	
	string s_cod = nuevaVenta.VerCodigoOculto();
	strncpy(registro.cod_oculto, s_cod.c_str(), sizeof(registro.cod_oculto) - 1);
	
	string s_desc = nuevaVenta.VerDescripcion();
	strncpy(registro.descripcion, s_desc.c_str(), sizeof(registro.descripcion) - 1);
	
	string s_talle = nuevaVenta.VerTalle();
	strncpy(registro.talle, s_talle.c_str(), sizeof(registro.talle) - 1);
	
	archivo.write(reinterpret_cast<const char*>(&registro), sizeof(VentaBinaria));
	archivo.close();
}

vector<Venta> HistorialVenta::BuscarVentas(int fechaDesde, int fechaHasta, string textoLibre, int codVenta, int documento, string talle) {
	
	vector<Venta> resultados;
	
	ifstream archivo(m_nombreArchivo, ios::binary | ios::in);
	if (!archivo) {
		return resultados;
	}
	
	VentaBinaria vb;
	
	while (archivo.read(reinterpret_cast<char*>(&vb), sizeof(VentaBinaria))){
		
		bool coincide = true;
		
		if (vb.fecha < fechaDesde || vb.fecha > fechaHasta) {
			coincide = false;
		}
		
		if (coincide && !textoLibre.empty()) {
			string descLeida = string(vb.descripcion);
			string codLeido = to_string(vb.cod_item);
			if (descLeida.find(textoLibre) == string::npos && codLeido.find(textoLibre) == string::npos) {
				coincide = false;
			}
		}
		
		if (coincide && codVenta != -1 && vb.cod_venta != codVenta) {
			coincide = false;
		}
		
		if (coincide && documento != -1 && vb.documento != documento) {
			coincide = false;
		}
		
		if (coincide && !talle.empty()) {
			if (string(vb.talle) != talle) {
				coincide = false;
			}
		}
		
		if (coincide) {
			Venta v_encontrada(
							   string(vb.cod_oculto),
							   vb.cantidad,
							   vb.precio,
							   vb.fecha,
							   vb.documento,
							   vb.total,
							   string(vb.descripcion),
							   vb.cod_venta,
							   vb.cod_item,
							   string(vb.talle)
							   );
			
			resultados.push_back(v_encontrada);
		}
	}
	archivo.close();
	return resultados;
}
