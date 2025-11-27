#ifndef UTILS_H
#define UTILS_H
#include <string>
#include <fstream>
#include <wx/datetime.h>
using namespace std;
void GuardarString(ofstream& archivo, const string& dato);

string LeerString(ifstream& archivo);

string floatToStringSinCeros(float valor);

int ConvertirFechaAEntero(const wxDateTime& fecha);
#endif
