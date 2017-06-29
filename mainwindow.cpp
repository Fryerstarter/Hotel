#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "main.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    //QString line = "421651651651651";

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    TestSearch *searcher = new TestSearch();
    //searcher->setModal(true);
    searcher->exec();


    //TestSearch newSearch;
    //newSearch.setModal(true);
    //newSearch.exec();
    Room myRoom;
    myRoom.setRoomNumber(searcher->getRoomNum());
    myRoom.setRoomQuality(searcher->getRoomQuality());
    ui->roomNumMain->setPlainText(myRoom.getRoomNumber());
    ui->roomQualityMain->setPlainText(myRoom.getRoomQuality());
   //QString myString = searcher->getString();
   //ui->roomNumMain->setText(myString);
}


