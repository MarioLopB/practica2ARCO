#ifndef GARAJE_H
#define GARAJE_H

#include <QWidget>

namespace Ui {
class Garaje;
}

class Garaje : public QWidget
{
    Q_OBJECT

public:
    explicit Garaje(QWidget *parent = nullptr);
    ~Garaje();

private:
    Ui::Garaje *ui;
};

#endif // GARAJE_H
