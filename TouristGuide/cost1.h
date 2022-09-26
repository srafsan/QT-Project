#ifndef COST1_H
#define COST1_H

#include <QDialog>

namespace Ui {
class Cost1;
}

class Cost1 : public QDialog
{
    Q_OBJECT

public:
    explicit Cost1(QWidget *parent = nullptr);
    ~Cost1();

private:
    Ui::Cost1 *ui;
};

#endif // COST1_H
