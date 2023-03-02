#ifndef GARAJE_H
#define GARAJE_H

#include <QDialog>
#include <vector>

#include "vehiculos.h"

namespace Ui {
class Garaje;
}

class Garaje : public QDialog
{
    Q_OBJECT

public:
    explicit Garaje(QWidget *parent = nullptr);
    ~Garaje();

    void addVehiculo(vector<Vehiculos> vehiculos);

private:
    Ui::Garaje *ui;
};

#endif // GARAJE_H
