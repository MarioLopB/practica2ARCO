#ifndef VEHICULOS_H
#define VEHICULOS_H

#include <iostream>

using namespace std;

class Vehiculos
{
public:
    Vehiculos();

    Vehiculos(string Nombre, string color, int ruedas);

    ~Vehiculos(void);

    void setNombre(string Nombre);

    void setColor(string color);

    void setRuedas(int ruedas);

    string getNombre();

    string getMatricula();

    string getColor();

    int getRuedas();
private:
    string Nombre, matricula, color;
    int ruedas;
};

#endif // VEHICULOS_H
