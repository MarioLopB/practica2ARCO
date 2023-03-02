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

Vehiculos::~Vehiculos(){}
