#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>
#include "main.h"
#include <QMainWindow>

namespace Ui {
class Search;
}

class Search : public QWidget
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = 0);
    explicit Search(Reservation *res, QWidget *parent = 0);
    ~Search();

private:
    Ui::Search *ui;
};

#endif // SEARCH_H
