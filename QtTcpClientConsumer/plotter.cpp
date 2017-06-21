#include "plotter.h"

Plotter::Plotter(QWidget *parent) :
    QWidget(parent)
{

}

void Plotter::setDados(std::vector<Data> dados)
{
    dataOutput = dados;
}



