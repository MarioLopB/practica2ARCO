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
    bool adv = true;
    for(auto v: vehiculos){
        QString motor, alas, reactores, tren_aterrizaje, locomotora, background, text;
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


        QLabel *nave = new QLabel;
        QString texto = "Nombre: " + v.getNombre() + " | Matricula: " + v.getMatricula() + " | Clase: " + v.getClase()
                + "\nNúmero de ruedas: " + QString().setNum(v.getRuedas()) + " | Motor: " + motor + " | Color: " + v.getColor()
                + "\nAlas: " + alas + " | Reactores: " + reactores + " | Tren de aterrizaje: " + tren_aterrizaje
                + "\nLocomotora: " + locomotora + " | Vagones: " + QString().setNum(v.getVagones())
                + "\n" + v.getKit();

        if(adv){
            text = "black";
            background = "#51e2f5";
            adv = false;
        } else{
            text = "white";
            background = "#101357";
            adv = true;
        }
        nave->setStyleSheet("QLabel { background-color :" + background + "; color : " + text + "; font-weight: bold; font-family: Serif, Helvetica, sans-serif; border-color: #091f36; padding: 8px}");
        nave->setText(texto);
        ui->verticalLayout_3->addWidget(nave);
        nave->show();
    }
}
