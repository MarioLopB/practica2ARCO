#include "manager.h"

#include <QString>
#include <QMessageBox>

#include <iostream>

using namespace std;

Manager::Manager()
{

}

Manager::~Manager(){}

bool Manager::addVehiculo(QString nombre, QString tipo_combustible, QString color, QString kit, QString matricula, int ruedas, int potencia, int vagones, int motor, int combustible, int alas, int reactores, int tren_aterrizaje, int locomotora){
    QString tipo;
    bool ok = true;

    if(ruedas == 2 && motor != 2 && combustible != 2 && reactores != 2
            && alas != 2&& tren_aterrizaje != 2 && locomotora != 2 && vagones == 0
            && kit == "Kit de reparación de pinchazos"){
        tipo = "bicicleta";
    } else if(ruedas == 3 && motor != 2 && combustible != 2 && reactores != 2 && tren_aterrizaje != 2 && locomotora != 2 && vagones == 0 && kit == "Kit de reparación de pinchazos"){
        tipo = "triciclo";
    } else if(ruedas == 2 && motor && potencia >= 80 && potencia <= 450 &&
              (tipo_combustible == "Eléctrico" || tipo_combustible == "Gasolina"
               || tipo_combustible == "Diésel" || tipo_combustible == "Híbrido")
              && combustible == 2 && reactores != 2 && alas != 2 && tren_aterrizaje != 2 && locomotora != 2 && vagones == 0
              && kit == "Kit de reparación de pinchazos"){
        tipo = "Motocicleta";
    } else if(ruedas == 4 && motor == 2 && potencia >= 80 && potencia <= 250 &&
              (tipo_combustible == "Eléctrico" || tipo_combustible == "Gasolina"
               || tipo_combustible == "Diésel" || tipo_combustible == "Híbrido")
              && combustible == 2 && reactores != 2 && alas != 2 && tren_aterrizaje != 2 && locomotora != 2 && vagones == 0
              && kit == "Rueda de repuesto"){
        tipo = "Coche";
    } else if(ruedas == 4 && motor == 2 && potencia >= 250 && potencia <= 450 &&
              (tipo_combustible == "Eléctrico" || tipo_combustible == "Gasolina")
              && combustible == 2 && reactores != 2 && alas != 2 && tren_aterrizaje != 2 && locomotora != 2 && vagones == 0
              && kit == "Kit de reparación de pinchazos"){
        tipo = "Coche deportivo";
    } else if(ruedas == 6 && motor == 2 && potencia == 450 &&
              tipo_combustible == "Queroseno"
              && combustible == 2 && color == "Blanco" && reactores == 2 && alas == 2 && tren_aterrizaje == 2 && locomotora != 2 && vagones == 0
              && kit == "Rueda de repuesto"){
        tipo = "Avión";
    } else if(ruedas == 40 && motor == 2 && potencia == 450 &&
              (tipo_combustible == "Eléctrico" || tipo_combustible == "Diésel")
              && combustible == 2 && color == "Negro" && reactores != 2 && alas != 2 && tren_aterrizaje != 2 && locomotora == 2
              && vagones >= 5 && vagones <= 20
              && kit == "Rueda de repuesto"){
        tipo = "Tren";
    } else {
        cout << "No existe" << endl;
        ok = false;
    }

    if(ok){
        Vehiculos *v = new Vehiculos("bicicleta", nombre, tipo_combustible, color, kit, matricula, ruedas, potencia, vagones, motor, combustible, alas, reactores, tren_aterrizaje, locomotora);
        vehiculos.push_back(*v);
    } else{
        QMessageBox error;
        error.critical(0, "ERROR", "La información introducida no coincide con ningún vehículo");
        error.setFixedSize(500, 200);
    }

    cout << nombre.toStdString() << " " << matricula.toStdString() << " " << tipo.toStdString() << endl;

    return ok;
}

void Manager::Hola(QString nombre){
    cout << "Hola " << nombre.toStdString() << endl;
}
