#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>
#include <QMessageBox>

#include "manager.h"
#include "garaje.h"

#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    manager = new Manager();

    ui->PotenciaI->setText("0");
    ui->VagonesI->setText("0");
    ui->PotenciaI->setEnabled(false);
    ui->TipoCombuI->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    QString matricula;
    vector alfabeto = {"C", "D", "F", "G", "H", "J", "K", "L", "M", "N", "P", "Q", "R", "S", "T", "V", "W", "X", "Y", "Z"};

    for(int i = 0; i < 4; i++){
        matricula.append(QString("%1").arg(rand()%(0-9)));
    }

    for(int i = 0; i < 3; i++){
        matricula.append(alfabeto[rand()%20]);
    }

    ui->MatriculaLB->setText(matricula);
}


void MainWindow::on_pushButton_2_clicked()
{
  QString nombre = ui->NombreI->text();
  QString tipo_combustible = ui->TipoCombuI->currentText();
  QString color = ui->ColorI->currentText();
  QString kit = ui->KitI->currentText();
  QString matricula = ui->MatriculaLB->text();
  int ruedas = ui->RuedasI->currentText().toInt();
  int potencia = ui->PotenciaI->text().toInt();
  int vagones = ui->VagonesI->text().toInt();
  int motor = ui->MotorI->checkState();
  int combustible = ui->CombustibleI->checkState();
  int alas = ui->ALasI->checkState();
  int reactores = ui->ReactoresI->checkState();
  int tren_aterrizaje = ui->TrenAteI->checkState();
  int locomotora = ui->LocomotorI->checkState();

  bool añadido = manager->addVehiculo(nombre, tipo_combustible, color, kit, matricula, ruedas, potencia, vagones, motor, combustible, alas, reactores, tren_aterrizaje, locomotora);

  if(añadido){
      ui->NombreI->clear();
      ui->MatriculaLB->clear();
      ui->PotenciaI->setText("0");
      ui->VagonesI->setText("0");
      ui->MotorI->setChecked(false);
      ui->CombustibleI->setChecked(false);
      ui->ALasI->setChecked(false);
      ui->ReactoresI->setChecked(false);
      ui->TrenAteI->setChecked(false);
      ui->LocomotorI->setChecked(false);
      ui->NVehiculos->setText("Nº de vehiculos: " + QString().setNum(manager->getVehiculos().size()));
  }
}


void MainWindow::on_MotorI_stateChanged(int arg1)
{
    if(arg1 == 2){
        ui->PotenciaI->setEnabled(true);
    } else{
        ui->PotenciaI->setText("0");
        ui->PotenciaI->setEnabled(false);
    }
}


void MainWindow::on_CombustibleI_stateChanged(int arg1)
{
    if(arg1 == 2){
        ui->TipoCombuI->setEnabled(true);
    } else{
        ui->TipoCombuI->setEnabled(false);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    if(manager->getVehiculos().size() == 0){
        QMessageBox info;
        info.information(0, "AVISO", "No hay vehiculos almacenados");
        info.setFixedSize(500, 200);
    } else{
        garaje = new Garaje(this);
        garaje->addVehiculo(manager->getVehiculos());
        garaje->show();
    }
}

