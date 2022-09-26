#include "cost1.h"
#include "ui_cost1.h"

Cost1::Cost1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cost1)
{
    ui->setupUi(this);
}

Cost1::~Cost1()
{
    delete ui;
}
