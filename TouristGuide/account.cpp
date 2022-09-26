#include "account.h"
#include "ui_account.h"
#include "aGuide.h"

Account::Account(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Account)
{
    ui->setupUi(this);
}

Account::~Account()
{
    delete ui;
}

void Account::on_pushButton_back_clicked()
{
    hide();
    aGuide aGuide;
    aGuide.setModal(true);
    aGuide.exec();
}
