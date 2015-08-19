#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "math_calculation.h"
#include <QDebug>
#include <QList>
#include <QTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_start_clicked();

    void on_stop_clicked();

private:
    Ui::MainWindow *ui;
    math_calculation *mc;
};

#endif // MAINWINDOW_H
