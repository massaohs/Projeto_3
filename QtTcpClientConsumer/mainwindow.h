#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>
#include "data.h"
#include <vector>
#include <QList>
#include <QListWidgetItem>
#include "plotter.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
    /**
   * @brief moldaVector É um slot que fará a atualização do vector conforme o tempo mude
   * @param dados É um vector que armazena os dados conforme o tempo eh atualizado
   */
  void moldaVector(std::vector<Data> dados);
  
public slots:
  /**
   * @brief getData É uma variável responsável por recuperar os dados
   */
  void getData();
  /**
   * @brief tcpConnect É um slot ligado ao botão connect que é um método de Onclick
   */
  void tcpConnect();
  /**
   * @brief tcpDisconnect É um slot ligado ao botão disconnect que é um método de Onclick
   */
  void tcpDisconnect();
  /**
   * @brief changeTiming É um slot que irá variar o tempo, ele serve para entrar (put) com dados de acordo com o tempo reguralizado pelo usuário
   * @param _timing É a variável que receberá o valor recuperado do slider (Timing)
   */
  void changeTiming(int _timing);
  /**
   * @brief setRunOFF É um slot que faz o Onclick do botão start
   */
  void setRunOFF();
  /**
   * @brief setRunON É um slot que faz o Onclick do botão stop
   */
  void setRunON();
  /**
   * @brief getIPs Lista no liswidget todos os IPs que enviaram dados para o servidor
   */
  void getIPs();
  /**
   * @brief IP_ON É um slot auxiliar que modifica o valor da variável ipSelecionado para True quando algum valor do listwidget for selecionado
   */
  void IP_ON();

private:
  /**
   * @brief ui Cria um objeto de interface gráfica
   */
  Ui::MainWindow *ui;
  /**
   * @brief socket Estabelece a comunicação com o servidor remóto
   */
  QTcpSocket *socket;
  /**
   * @brief t É um objeto da classe QTimer que será usado para chamar o método de start
   */
  QTimer *t;
  /**
   * @brief timing É uma variável que receberá o valor do slider respctivo
   */
  int timing=1000;
  /**
   * @brief dados É um vector que armazena os dados conforme o tempo eh atualizado
   */
  std::vector<Data> dados;
  /**
   * @brief ipSelecionado É uma variável boleana para verificar o IP
   */
  bool ipSelecionado = false;
};

#endif // MAINWINDOW_H
