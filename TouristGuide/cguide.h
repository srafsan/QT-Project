#ifndef CGUIDE_H
#define CGUIDE_H

#include <QDialog>
#include "dGuide.h"

namespace Ui {
class cGuide;
}

class cGuide : public QDialog
{
    Q_OBJECT

public:
    explicit cGuide(QWidget *parent = nullptr);
    ~cGuide();

private slots:
    void on_pushButton_coxsbazar_clicked();

private:
    Ui::cGuide *ui;
    dGuide *dGuide;
};

#endif // CGUIDE_H
