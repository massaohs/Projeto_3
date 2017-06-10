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
  void putData();
  void changeMin(int _min);
  void changeMax(int _max);
  void changeTiming(int _timing);
  void tcpConnect();
  void tcpDisconnect();
  void setRunOFF();
  void setRunON();


private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int min=0, max=99, timing=1000;
  QTimer *t;
};

#endif // MAINWINDOW_H
