#ifndef GUIDE_H
#define GUIDE_H

#include <QMainWindow>
#include "aguide.h"
namespace Ui {
class Guide;
}

class Guide : public QMainWindow
{
    Q_OBJECT

public:
    explicit Guide(QWidget *parent = nullptr);
    ~Guide();

private slots:
    void on_pushButton_user_clicked();

private:
    Ui::Guide *ui;
    aGuide *aGuide;
};

#endif // GUIDE_H
