#ifndef MANAGER_H
#define MANAGER_H

#include "vehiculos.h"

#include <QString>

#include <vector>
#include <iostream>

using namespace std;

class Manager
{
public:
    Manager();
    ~Manager();

    void setTipo(QString nombre, QString tipo_combustible, QString color, QString kit, QString matricula, int ruedas, int potencia, int vagones, int motor, int combustible, int alas, int reactores, int tren_aterrizaje, int locomotora);
};

#endif // MANAGER_H
