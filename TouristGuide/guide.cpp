#include "guide.h"
#include "ui_guide.h"

Guide::Guide(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Guide)
{
    ui->setupUi(this);
}

Guide::~Guide()
{
    delete ui;
}

void Guide::on_pushButton_user_clicked()
{
    hide();
    aGuide = new class aGuide(this);
    aGuide->show();
}
