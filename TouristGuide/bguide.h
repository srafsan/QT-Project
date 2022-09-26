#ifndef BGUIDE_H
#define BGUIDE_H

#include <QDialog>
#include "cguide.h"

namespace Ui {
class bGuide;
}

class bGuide : public QDialog
{
    Q_OBJECT

public:
    explicit bGuide(QWidget *parent = nullptr);
    ~bGuide();

private slots:
   // void on_pushButton_back_clicked();

    void on_pushButton_next_clicked();

private:
    Ui::bGuide *ui;
    cGuide *cGuide;
};

#endif // BGUIDE_H
