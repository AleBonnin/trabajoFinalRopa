#include "utils.h"
#include <fstream>
#include <string>
#include <wx/datetime.h>
using namespace std;
void GuardarString(ofstream& archivo, const string& dato) {
	size_t tam = dato.size();
	archivo.write(reinterpret_cast<const char*>(&tam), sizeof(size_t));
	archivo.write(dato.c_str(), tam);
}

string LeerString(ifstream& archivo) {
	size_t tam;
	archivo.read(reinterpret_cast<char*>(&tam), sizeof(size_t));
	string dato(tam, '\0');
	archivo.read(&dato[0], tam);
	return dato;
}
string floatToStringSinCeros(float valor) {
	string str = to_string(valor);
	str.erase(str.find_last_not_of('0') + 1, string::npos);
	if (!str.empty() && str.back() == '.') {
		str.pop_back();
	}
	
	return str;
}

int ConvertirFechaAEntero(const wxDateTime& fecha) {
	if (!fecha.IsValid()) {
		return 0; 
	}
	

	int year = fecha.GetYear();
	int month = fecha.GetMonth() + 1; 
	int day = fecha.GetDay();

	
	return year * 10000 + month * 100 + day;
}
