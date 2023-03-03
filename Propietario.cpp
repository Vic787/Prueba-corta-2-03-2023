#include "Persona.cpp"
#include <iostream>

using namespace std;

class Propietario : Persona{
	private:
		string nit;
		double cui;
	
	public:
		Propietario(string nom, string ape, string dir, string f_nac, int tel, string n, double c) : Persona(nom, ape, dir, f_nac, tel){
			nit = n;
			cui = c;
		}
		
	// Métodos para visualizar cada uno de los elemento
	string getNit(){return nit;}
	double getCui(){return cui;}
	string getNombre(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFechaNacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
	
	// Función que muestra cada uno de los datos ingresados
	void mostrar(){
		cout << "____________________" << endl;
		cout << "DATOS INGRESADOS: " << endl;
		cout << "--------------------" << endl;
		cout << "NIT: " << nit << endl;
		cout << "CUI: " << cui << endl;
		cout << "Nombres: " << nombres << endl;
		cout << "Apellidos: " << apellidos << endl;
		cout << "Direccion: " << direccion << endl;
		cout << "Fecha de nacimiento: " << fecha_nacimiento << endl;
		cout << "Telefono: " << telefono << endl;
		cout << "____________________" << endl;
	}
	
	// 
	void agregar(){
		cout << "Atributos agregados exitosamente." << endl;
	}
};
