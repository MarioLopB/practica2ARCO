#ifndef MANAGER_H
#define MANAGER_H

#include "vehiculos.h"

#include <QString>

#include <vector>
#include <iostream>

using namespace std;

class Manager
{
private:
    vector<Vehiculos> vehiculos;
public:
    Manager();
    ~Manager();

    bool addVehiculo(QString nombre, QString tipo_combustible, QString color, QString kit, QString matricula, int ruedas, int potencia, int vagones, int motor, int combustible, int alas, int reactores, int tren_aterrizaje, int locomotora);

    vector<Vehiculos> getVehiculos();

    bool existeMatricula(QString matricula);
};

#endif // MANAGER_H
