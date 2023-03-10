#ifndef VEHICULOS_H
#define VEHICULOS_H

#include <QString>
#include <iostream>

using namespace std;

class Vehiculos
{
public:
    Vehiculos();

    Vehiculos(QString clase, QString nombre, QString tipo_combustible, QString color, QString kit, QString matricula, int ruedas, int potencia, int vagones, int motor, int combustible, int alas, int reactores, int tren_aterrizaje, int locomotora);

    ~Vehiculos(void);

    QString getClase();

    QString getNombre();

    QString getTipoCombustible();

    QString getColor();

    QString getKit();

    QString getMatricula();

    int getRuedas();

    int getPotencia();

    int getVagones();

    int getMotor();

    int getCombustible();

    int getAlas();

    int getReactores();

    int getTrenAterrizaje();

    int getLocomotora();

private:
    QString clase, nombre, tipo_combustible, color, kit, matricula;
    int ruedas, potencia, vagones, motor, combustible, alas, reactores, tren_aterrizaje, locomotora;
};

#endif // VEHICULOS_H
