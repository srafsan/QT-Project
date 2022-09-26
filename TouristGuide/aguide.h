#ifndef AGUIDE_H
#define AGUIDE_H

#include <QDialog>
#include "bguide.h"
#include "account.h"

namespace Ui {
class aGuide;
}

class aGuide : public QDialog
{
    Q_OBJECT

public:
    explicit aGuide(QWidget *parent = nullptr);
    ~aGuide();

private slots:
    void on_pushButton_login_clicked();

    //void on_pushButton_back_clicked();

    void on_pushButton_createaccount_clicked();

private:
    Ui::aGuide *ui;
    bGuide *bGuide;
    Account *Account;
};

#endif // AGUIDE_H
