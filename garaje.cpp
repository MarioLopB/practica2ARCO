#include "garaje.h"
#include "ui_garaje.h"

#include <QLabel>

#include "vehiculos.h"

#include <vector>

Garaje::Garaje(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Garaje)
{
    ui->setupUi(this);
}

Garaje::~Garaje()
{
    delete ui;
}

void Garaje::addVehiculo(vector<Vehiculos> vehiculos){
    for(auto v: vehiculos){
        QString motor, alas, reactores, tren_aterrizaje, locomotora;
        if(v.getMotor() == 2){
            motor = "SI | Potencia: " + QString().setNum(v.getPotencia());
        } else{
            motor = "NO";
        }

        if(v.getAlas() == 2){
            alas = "SI";
        } else{
            alas = "NO";
        }

        if(v.getReactores() == 2){
            reactores = "SI";
        } else{
            reactores = "NO";
        }

        if(v.getTrenAterrizaje() == 2){
            tren_aterrizaje = "SI";
        } else{
            tren_aterrizaje = "NO";
        }

        if(v.getLocomotora() == 2){
            locomotora = "SI";
        } else{
            locomotora = "NO";
        }


        cout << QString().arg(v.getRuedas()).toStdString() << endl;

        QLabel *nave = new QLabel;
        QString texto = "Nombre: " + v.getNombre() + " | Matricula: " + v.getMatricula() + " | Clase: " + v.getClase()
                + "\nNúmero de ruedas: " + QString().setNum(v.getRuedas()) + " | Motor: " + motor + " | Color: " + v.getColor()
                + "\nAlas: " + alas + " | Reactores: " + reactores + " | Tren de aterrizaje: " + tren_aterrizaje
                + "\nLocomotora: " + locomotora + " | Vagones: " + QString().setNum(v.getVagones()) + " | " + v.getKit();

        nave->setText(texto);
        ui->verticalLayout->addWidget(nave);
        nave->show();
    }
}
