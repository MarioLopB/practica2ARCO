#include "garaje.h"
#include "ui_garaje.h"

#include <QTextEdit>

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
        QTextEdit *nave = new QTextEdit;
        QString texto = "Nombre: " + v.getNombre();
        nave->setText(texto);
        ui->verticalLayout->addWidget(nave);
        nave->show();
    }
}
