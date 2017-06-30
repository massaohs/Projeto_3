#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
public slots:
    /**
   * @brief putData É o slot responsável por enviar os dados.
   */
  void putData();
  /**
   * @brief changeMin É um slot que recupera o valor do slider, que será o mínimo.
   * @param _min é a variável que receve o valor do slider.
   */
  void changeMin(int _min);
  /**
   * @brief changeMax É um slot que recupera o valor do slider, que será o máximo.
   * @param _max é a variável que receve o valor do slider.
   */
  void changeMax(int _max);
  /**
   * @brief changeTiming É um slot que irá variar o tempo, ele serve para entrar (put) com dados de acordo com o tempo reguralizado pelo usuário.
   * @param _timing é a variável que receberá o valor recuperado do slider (Timing).
   */
  void changeTiming(int _timing);
  /**
   * @brief tcpConnect É um slot ligado ao botão connect que é um método de Onclick.
   */
  void tcpConnect();
  /**
   * @brief tcpDisconnect É um slot ligado ao botão disconnect que é um método de Onclick.
   */
  void tcpDisconnect();
  /**
   * @brief setRunOFF É um slot que faz o Onclick do botão start.
   */
  void setRunOFF();
  /**
   * @brief setRunON É um slot que faz o Onclick do botão stop.
   */
  void setRunON();


private:
  /**
   * @brief ui Cria um objeto de interface gráfica.
   */
  Ui::MainWindow *ui;
  /**
   * @brief socket Estabelece a comunicação com o servidor remóto
   */
  QTcpSocket *socket;
  /**
   * @brief min É uma variável que receberá o valor do slider respctivo.
   */
  int min=0;
  /**
   * @brief max É uma variável que receberá o valor do slider respctivo.
   */
  int max=99;
  /**
   * @brief timing É uma variável que receberá o valor do slider respctivo.
   */
  int timing=1000;
  QTimer *t;
  int test;

};

#endif // MAINWINDOW_H
