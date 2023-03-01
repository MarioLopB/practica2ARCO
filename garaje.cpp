#include "garaje.h"
#include "ui_garaje.h"

Garaje::Garaje(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Garaje)
{
    ui->setupUi(this);
}

Garaje::~Garaje()
{
    delete ui;
}
