#include "mainwindow.h"

#include <QApplication>

AdministradoraNeurona admiNeurona;

int main(int argc, char *argv[])
{
    int id = 1;
    float voltaje = 12.5;
    int posX = 3;
    int posY = 4;
    int red = 25;
    int green = 25;
    int blue = 25;

    admiNeurona.agregarInicio(id, voltaje, posX, posY, red, green, blue);
    admiNeurona.agregarFinal(id, voltaje, posX, posY, red, green, blue);
    //admiNeurona.mostrar();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
