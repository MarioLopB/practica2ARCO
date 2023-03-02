#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "manager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_MotorI_stateChanged(int arg1);

    void on_CombustibleI_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;

    Manager *manager;
};
#endif // MAINWINDOW_H
