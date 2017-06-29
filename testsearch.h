#ifndef TESTSEARCH_H
#define TESTSEARCH_H

#include <QWidget>
#include <QDialog>
#include "room.h"

namespace Ui {
class TestSearch;
}

class TestSearch : public QDialog
{
    Q_OBJECT

public:
    explicit TestSearch(QWidget *parent = 0);
    ~TestSearch();
    QString getString();
    QString getRoomNum();
    QString getRoomQuality();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_searchSearch_clicked();

private:
    Ui::TestSearch *ui;
};

#endif // TESTSEARCH_H
