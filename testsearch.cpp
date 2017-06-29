#include "testsearch.h"
#include "ui_testsearch.h"
#include "ui_mainwindow.h"
#include "main.h"

TestSearch::TestSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestSearch)
{
    ui->setupUi(this);

}

TestSearch::~TestSearch()
{
    delete ui;
}

void TestSearch::on_lineEdit_textChanged(const QString &arg1)
{

}

void TestSearch::on_searchSearch_clicked()
{
  this->close();
}

QString TestSearch::getString(){

    return "lawdioajd";

}
QString TestSearch::getRoomNum()
{
    QString roomNumber = ui->roomNumberBox->toPlainText();
    return roomNumber;
    //Room newRoom = Room(ui->roomNumberBox->toPlainText(), ui->roomQualityBox->toPlainText());
}

QString TestSearch::getRoomQuality()
{
    QString roomQuality = ui->roomQualityBox->toPlainText();
    return roomQuality;
    //Room newRoom = Room(ui->roomNumberBox->toPlainText(), ui->roomQualityBox->toPlainText());
}


