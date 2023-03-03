#include "Propietario.cpp"
#include <iostream>

using namespace std;

int main(){
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	double cui;
	int telefono;
	
	cout << "Ingrese NIT: ";
	cin >> nit;
	cout << "Ingrese CUI: ";
	cin >> cui;
	cout << "Ingrese nombres: ";
	cin >> nombres;
	cout << "Ingrese apellidos: ";
	cin >> apellidos;
	cout << "Ingrese direccion: ";
	cin >> direccion;
	cout << "Ingrese fecha de nacimiento: ";
	cin >> fecha_nacimiento;
	cout << "Ingrese telefono: ";
	cin >> telefono;
	
	Propietario obj = Propietario(nombres, apellidos, direccion, fecha_nacimiento, telefono, nit, cui);
	obj.mostrar();
	obj.agregar();
}
