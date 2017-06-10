#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimer>
#include <iostream>
#include <QList>
#include <vector>
//#include <data.h>



MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  t = new QTimer(this);


  connect(ui->PB_Connect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));
  connect(ui->PB_Disconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpDisconnect()));
  connect(ui->sliderTiming,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(changeTiming(int)));
  connect(ui->pushButtonGet,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));
}

void MainWindow::tcpConnect(){
  socket->connectToHost(ui->textIP->text(),1234);
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

void MainWindow::changeTiming(int _timing)
{
    if(_timing < 1) _timing = 1;
    ui->textTiming->setNum(_timing);
    timing = _timing*1000;
    if(t->isActive()){
        t->start(timing);
    }
}

void MainWindow::getData(){
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  QStringList linha;

  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      socket->write("get 127.0.0.1 30\r\n");
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      int i;
      if(dados.size()>=100){
          moldaVector(dados);
      }
      qDebug() << "Teste: " << endl << i << endl;
      while(socket->bytesAvailable()){
        i=dados.size();
        str = socket->readLine().replace("\n","").replace("\r","");
        linha = str.split(" ");
        dados.push_back(Data());
        dados[i].valor = linha[1].toInt();
        dados[i].tempo = linha[0].toLong();

        qDebug()<< "Teste : " << dados[i].tempo << endl;
        qDebug() << dados.size() << "  " << i << endl;




        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
      }
    }
  }
}


void MainWindow::moldaVector(std::vector<Data> dados){
    int k = dados.size()-1;
    for(int i = 29; i>=0; i--){
        dados[i] = dados[k];
        k--;
    }
    dados.resize(30);
}

MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}
