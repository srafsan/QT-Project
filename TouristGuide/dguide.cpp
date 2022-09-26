#include "dguide.h"
#include "ui_dguide.h"
#include "cguide.h"

dGuide::dGuide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dGuide)
{
    ui->setupUi(this);
}

dGuide::~dGuide()
{
    delete ui;
}

void dGuide::on_pushButton_back_clicked()
{
    hide();
    cGuide cGuide;
    cGuide.setModal(true);
    cGuide.exec();
}

void dGuide::on_pushButton_next_clicked()
{
    hide();
    Cost1 = new class Cost1(this);
    Cost1->show();
}
