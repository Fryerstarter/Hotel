
#include "ui_search.h"
#include "main.h"


Search::Search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
    Room room_search;

}

Search::~Search()
{
    delete ui;
}

Search::Search(Reservation *res, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);

}

