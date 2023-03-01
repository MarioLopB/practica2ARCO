#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->manager = new Manager();
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
    this->manager
}

