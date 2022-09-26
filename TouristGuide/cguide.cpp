#include "cguide.h"
#include "ui_cguide.h"

cGuide::cGuide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cGuide)
{
    ui->setupUi(this);
}

cGuide::~cGuide()
{
    delete ui;
}

void cGuide::on_pushButton_coxsbazar_clicked()
{
    hide();
    dGuide = new class dGuide(this);
    dGuide->show();
}
