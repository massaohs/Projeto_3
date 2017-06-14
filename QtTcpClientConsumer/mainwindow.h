#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>
#include <data.h>
#include <vector>
#include <QList>
#include <QListWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  void moldaVector(std::vector<Data> dados);
  
public slots:
  void getData();
  void tcpConnect();
  void tcpDisconnect();
  void changeTiming(int _timing);
  void setRunOFF();
  void setRunON();
  void getIPs();


private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  QTimer *t;
  int timing=1000;
  std::vector<Data> dados;
};

#endif // MAINWINDOW_H
