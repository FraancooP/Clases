#include <iostream>
#include <cstring>
using namespace std;
class Vehiculo{
private:
	//atributos
	string tipo;
	int capacidad;
	string patente;
	string color;
public:
	Vehiculo();
	void setTipo(string tip);
	string getTipo();
	void setCapacidad(int cap);
	int getCapacidad();
	void setPatente(string pat);
	string getPatente();
	void setColor(string col);
	string getColor();
	string toString();
};
Vehiculo::Vehiculo(){
}
void Vehiculo::setTipo(string tip){
	tipo = tip;
}
string Vehiculo::getTipo(){
	return tipo;
}
void Vehiculo::setCapacidad(int cap){
	capacidad = cap;
}
int Vehiculo::getCapacidad(){
	return capacidad;
}
void Vehiculo::setPatente(string pat){
	patente = pat;
}
string Vehiculo::getPatente(){
	return patente;
}
void Vehiculo::setColor(string col){
	color = col;
}
string Vehiculo::getColor(){
	return color;
}
string Vehiculo::toString(){
	string cadena="Tipo: "+tipo+" Cap. "+std::to_string(capacidad)+" Pat. "+patente+" Col "+color;
	return cadena;
}
