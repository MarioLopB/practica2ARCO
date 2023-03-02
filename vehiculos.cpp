#include "vehiculos.h"

#include <QString>
#include <vector>
#include <time.h>
#include <iostream>

using namespace std;

Vehiculos::Vehiculos()
{

}

Vehiculos::Vehiculos(QString clase, QString nombre, QString tipo_combustible, QString color, QString kit, QString matricula, int ruedas, int potencia, int vagones, int motor, int combustible, int alas, int reactores, int tren_aterrizaje, int locomotora)
{
    this->clase = clase;
    this->nombre = nombre;
    this->tipo_combustible = tipo_combustible;
    this->color = color;
    this->kit = kit;
    this->matricula = matricula;
    this->ruedas = ruedas;
    this->potencia = potencia;
    this->vagones = vagones;
    this->motor = motor;
    this->combustible = combustible;
    this->alas = alas;
    this->reactores = reactores;
    this->tren_aterrizaje = tren_aterrizaje;
    this->locomotora = locomotora;
}

QString Vehiculos::getClase(){
    return this->clase;
}

QString Vehiculos::getNombre(){
    return this->nombre;
}

QString Vehiculos::getTipoCombustible(){
    return this->tipo_combustible;
}

QString Vehiculos::getColor(){
    return this->color;
}

QString Vehiculos::getKit(){
    return this->kit;
}

QString Vehiculos::getMatricula(){
    return this->matricula;
}

int Vehiculos::getRuedas(){
    return this->ruedas;
}

int Vehiculos::getPotencia(){
    return this->potencia;
}

int Vehiculos::getVagones(){
    return this->vagones;
}

int Vehiculos::getMotor(){
    return this->motor;
}

int Vehiculos::getCombustible(){
    return this->combustible;
}

int Vehiculos::getAlas(){
    return this->alas;
}

int Vehiculos::getReactores(){
    return this->reactores;
}

int Vehiculos::getTrenAterrizaje(){
   return this->tren_aterrizaje;
}

int Vehiculos::getLocomotora(){
    return this->locomotora;
}

Vehiculos::~Vehiculos(){}
