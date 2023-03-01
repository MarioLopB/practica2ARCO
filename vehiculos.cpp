#include "vehiculos.h"

#include <vector>
#include <time.h>
#include <iostream>

using namespace std;

Vehiculos::Vehiculos()
{

}

Vehiculos::Vehiculos(string Nombre, string color, int ruedas)
{
    this->Nombre = Nombre;
    this->color = color;
    this->ruedas = ruedas;
}

Vehiculos::~Vehiculos(){}

void Vehiculos::setNombre(string Nombre){
    this->Nombre = Nombre;
}

void Vehiculos::setColor(string color){
    this->color = color;
}

void Vehiculos::setRuedas(int ruedas){
    this->ruedas = ruedas;
}

string Vehiculos::getNombre(){
    return this->Nombre;
}

string Vehiculos::getMatricula(){
    return this->matricula;
}

string Vehiculos::getColor(){
    return this->color;
}

int Vehiculos::getRuedas(){
    return this->ruedas;
}
