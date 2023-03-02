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
    QString tipo, terror;
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

    if(nombre == ""){
        ok = false;
        terror = "El vehículo necesita un nombre";
    } else if(matricula == ""){
        ok = false;
        terror = "El vehículo necesita una matrícula";
    } else if(existeMatricula(matricula)){
        ok = false;
        terror = "La matrícula ya existe";
    } else if(!ok){
        terror = "La información introducida no coincide con ningún vehículo";
    }

    if(ok){
        Vehiculos *v = new Vehiculos(tipo, nombre, tipo_combustible, color, kit, matricula, ruedas, potencia, vagones, motor, combustible, alas, reactores, tren_aterrizaje, locomotora);
        vehiculos.push_back(*v);

        QMessageBox info;
        info.information(0, "AVISO", "Se ha añadido un vehículo: " + tipo);
        info.setFixedSize(500, 200);
    } else{
        QMessageBox error;
        error.critical(0, "ERROR", terror);
        error.setFixedSize(500, 200);
    }

    cout << nombre.toStdString() << " " << matricula.toStdString() << " " << tipo.toStdString() << endl;

    return ok;
}

vector<Vehiculos> Manager::getVehiculos(){
    return this->vehiculos;
}

bool Manager::existeMatricula(QString matricula){
    for(auto v: vehiculos){
        if(v.getMatricula() == matricula){
            return true;
        }
    }

    return false;
}

void Manager::Hola(QString nombre){
    cout << "Hola " << nombre.toStdString() << endl;
}
