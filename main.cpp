#include "mainwindow.h"
#include "garaje.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Garaje g;
    w.show();
    g.show();
    return a.exec();
}
