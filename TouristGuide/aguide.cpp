#include "aguide.h"
#include "ui_aguide.h"
#include <QMessageBox>
//#include "guide.h"

aGuide::aGuide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aGuide)
{
    ui->setupUi(this);
}

aGuide::~aGuide()
{
    delete ui;
}
void aGuide::on_pushButton_login_clicked()
{

    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();
    if(username == "1" && password == "1"){
   //ui->statusBar->showMessage("Username & password is correct");
        QMessageBox::information(this,"Login","username and password is correct");
        hide();
        bGuide = new class bGuide(this);
        bGuide->show();
    }
    else
        {
          QMessageBox::warning(this,"Login","username and password is not correct");
     //ui->statusBar->showMessage("Username & password is not correct");
    }
}
/*void aGuide::on_pushButton_back_clicked()
{
    Guide Guide;
    Guide.setModal(true);
    Guide.exec();
}
*/
void aGuide::on_pushButton_createaccount_clicked()
{
   // hide();
    Account = new class Account(this);
    Account->show();
}
