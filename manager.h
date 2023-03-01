#ifndef MANAGER_H
#define MANAGER_H

#include "vehiculos.h"

#include <vector>
#include <iostream>

using namespace std;

class Manager
{
public:
    Manager();
    ~Manager();

    void setTipo(string nombre, string tipo_combustible, string color, string kit, string matricula, int ruedas, int potencia, int vagones, bool motor, bool combustible, bool alas, bool reactores, bool tren_aterrizaje, bool locomotora);
};

#endif // MANAGER_H
