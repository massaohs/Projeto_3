#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include "data.h"
/**
 * @brief A classe Plotter
 */
class Plotter : public QWidget
{
    Q_OBJECT
private:
    /**
     * @brief dataOutput Eh um vector que armazenará os dados de entrada.
     */
    std::vector<Data> dataOutput;
public:
    explicit Plotter(QWidget *parent = 0);
    /**
     * @brief setDados É um slot para "setar" os dados
     * @param dados É um vector que armazena os dados conforme o tempo é atualizado
     */
    void setDados(std::vector<Data> dados);
    /**
     * @brief paintEvent É um slot que define como sera pintado os dados e o que sera usado para pintar 
     */
    void paintEvent(QPaintEvent *e);
    int test2;
    int test3;
    int test4;

signals:

public slots:

};

#endif // PLOTTER_H
