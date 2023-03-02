#ifndef GARAJE_H
#define GARAJE_H

#include <QDialog>

namespace Ui {
class Garaje;
}

class Garaje : public QDialog
{
    Q_OBJECT

public:
    explicit Garaje(QWidget *parent = nullptr);
    ~Garaje();

private:
    Ui::Garaje *ui;
};

#endif // GARAJE_H
