#include "bguide.h"
#include "ui_bguide.h"
//#include "aguide.h"

bGuide::bGuide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bGuide)
{
    ui->setupUi(this);
}

bGuide::~bGuide()
{
    delete ui;
}
/*void bGuide::on_pushButton_back_clicked()
{
    hide();
    aGuide aGuide;
    aGuide.setModal(true);
    aGuide.exec();
}
*/
void bGuide::on_pushButton_next_clicked()
{
    hide();
    cGuide = new class cGuide(this);
    cGuide->show();
}
