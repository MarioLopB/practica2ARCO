#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->manager = Manager();
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    QString matricula;
    vector alfabeto = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

    for(int i = 0; i < 4; i++){
        matricula.append(QString("%1").arg(rand()%(0-9)));
    }

    for(int i = 0; i < 3; i++){
        matricula.append(alfabeto[rand()%25]);
    }

    ui->MatriculaLB->setText(matricula);
}


void MainWindow::on_pushButton_2_clicked()
{
    this->manager.setTipo(ui->NombreI->text(), ui->TipoCombuI->currentText(), ui->ColorI->currentText(), ui->KitI->currentText(), ui->MatriculaLB->text(), ui->RuedasI->currentText().toInt(), ui->PotenciaI->value(), ui->VagonesI->value(), ui->MotorI->checkState(), ui->CombustibleI->checkState(), ui->ALasI->checkState(), ui->ReactoresI->checkState(), ui->TrenAteI->checkState(), ui->LocomotorI->checkState());
}

