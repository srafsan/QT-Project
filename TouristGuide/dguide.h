#ifndef DGUIDE_H
#define DGUIDE_H

#include <QDialog>
#include "cost1.h"

namespace Ui {
class dGuide;
}

class dGuide : public QDialog
{
    Q_OBJECT

public:
    explicit dGuide(QWidget *parent = nullptr);
    ~dGuide();

private slots:

    void on_pushButton_back_clicked();

    void on_pushButton_next_clicked();


private:
    Ui::dGuide *ui;
    Cost1 *Cost1;
};

#endif // DGUIDE_H
