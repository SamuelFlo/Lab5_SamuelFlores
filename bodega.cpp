#include <iostream>
#include "bodega.h"
#include "ingredientes.h"
#include "platos.h"
using namespace std;

Bodega::Bodega(){
}

Bodega::Bodega(int pCantidad){
	this->cantidad=pCantidad;


}
    //getter
int Bodega::getCantidad(){
	return cantidad;
}

vector<Ingredientes*> Bodega::getDisponible(){
	return disponible;


}
vector<Platos*> Bodega::getMenu(){
	return menu;

}
//setter
void Bodega::setMenu(Platos* plat){
	menu.push_back(plat);
}

void Bodega::setDisponible(Ingredientes* d){

	disponible.push_back(d);

}
void Bodega::setCantidad(int c){
	cantidad=c;

}


