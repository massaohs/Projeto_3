#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <iostream>
#include <unistd.h>
#include <QTextEdit>
#include <QTimer>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  t = new QTimer(this);
  ui->SliderMax->setValue(99);
  ui->lcdMax->display(99);

  connect(ui->SliderMin,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(changeMin(int)));
  connect(ui->SliderMax,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(changeMax(int)));
  connect(ui->SliderTiming,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(changeTiming(int)));
  connect(ui->PBconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));
  connect(ui->PBdisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpDisconnect()));
  connect(ui->PBstart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(setRunON()));
  connect(ui->PBstop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(setRunOFF()));
  connect(t,
          SIGNAL(timeout()),
          this,
          SLOT(putData()));

}



void MainWindow::tcpConnect(){
  socket->connectToHost(ui->TextIP->text(),1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }
}

void MainWindow::tcpDisconnect()
{
    socket->disconnectFromHost();
    if(!socket->waitForConnected(3000)){
        qDebug() << "Disconnected";
    }
    else{
        qDebug() << "Ainda esta conectado";
    }
}



void MainWindow::setRunON()
{
    t->start(timing);
}

void MainWindow::setRunOFF()
{
    t->stop();
}


void MainWindow::putData()
{
  QDateTime datetime;
  QString str;
  qint64 msecdate;



  if(socket->state()== QAbstractSocket::ConnectedState){

      datetime = QDateTime::currentDateTime();
      msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
      str = "set " + QString::number(msecdate) + " " + QString::number(min + qrand()%(max+1-min)) + "\r\n";

      ui->TextOutput->append(str);
      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
  }
}




void MainWindow::changeMin(int _min)
{
    if(_min>max) {
        max=_min;
        ui->lcdMax->display(_min);
        ui->SliderMax->setValue(_min);
    }
    min = _min;
    ui->lcdMin->display(min);    
}

void MainWindow::changeMax(int _max)
{
   if(_max<min){
       min = _max;
       ui->lcdMin->display(_max);
       ui->SliderMin->setValue(_max);
   }
    max = _max;
    ui->lcdMax->display(max);
}

void MainWindow::changeTiming(int _timing)
{
    if(_timing < 1) _timing = 1;
    ui->textTiming->setNum(_timing);
    timing = _timing*1000;
    if(t->isActive()){
        t->start(timing);
    }
}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
  delete t;
}
