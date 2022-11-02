#include <iostream>
#include <cstring>
using namespace std;
class Libro{
private:
	string nombre;
	int paginas;
	string autor;
	string tipo;
	int valor;
public:
	Libro();
	void setNombre(string nom);
	string getNombre();
	void setPaginas(int pag);
	int getPaginas();
	void setAutor(string aut);
	string getAutor();
	void setTipo(string tip);
	string getTipo();
	void setValor(int val);
	int getValor();
	string toString();
};
Libro::Libro(){//Constructor
}
void Libro::setNombre(string nom){
	nombre = nom;
}
string Libro::getNombre(){
	return nombre;
}
void Libro::setPaginas(int pag){
	paginas = pag;
}
int Libro::getPaginas(){
	return paginas;
}
void Libro::setAutor(string aut){
	autor = aut;
}
string Libro::getAutor(){
	return autor;
}
void Libro::setTipo(string tip){
	tipo = tip;
}
string Libro::getTipo(){
	return tipo;
}
void Libro::setValor(int val){
	valor = val;
}
int Libro::getValor(){
	return valor;
}
string Libro::toString(){
	string cadena="Nombre: "+nombre+" Paginas: "+std::to_string(paginas)+" Autor: "+autor+" Tipo: "+tipo+" Precio:$ "+std::to_string(valor);
	return cadena;
}
