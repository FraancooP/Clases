#include <iostream>
#include "Vehiculo.h"
#include <cstring>
using namespace std;
void mostrar(Vehiculo [2]);
void buscar(Vehiculo [2]);
int main(int argc, char *argv[]) {
	char Modelo[10];
	Vehiculo objeto1;
	Vehiculo objeto2;
	Vehiculo lista[2];
	printf("Ingrese el tipo de Vehiculo: ");
	scanf("%[^\n]",&Modelo);
	objeto1.setTipo(Modelo);
	objeto1.setCapacidad(5);
	objeto1.setPatente("12345");
	objeto1.setColor("Amarillo");
	lista[0]=objeto1;
	
	objeto2.setTipo("Tractor");
	objeto2.setCapacidad(3);
	objeto2.setPatente("678910");
	objeto2.setColor("Verde");
	lista[1]=objeto2;
	mostrar(lista);
	buscar(lista);
	return 0;
}
void mostrar(Vehiculo lista[2]){
	cout<<"Lista de Vehiculos registrados: \n";
	for(int i=0;i<2;i++){
		Vehiculo v=lista[i];
		cout<<v.toString()<<endl;
	}
	cout<<"\n";
}
void buscar(Vehiculo lista[2]){
	string patente=" ";
	cout<<"Ingrese la patente del Vehiculo a buscar: "<<endl;
	cin>>patente;
	cout<<"\n";
	for(int i=0;i<2;i++){
		Vehiculo v=lista[i];
		if(lista[i].getPatente().compare(patente)==0){
			cout<<v.toString()<<endl;
		}
	}
	cout<<"\n";
}
