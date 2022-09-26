/********************************************************************************
** Form generated from reading UI file 'cost1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COST1_H
#define UI_COST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Cost1
{
public:
    QGroupBox *groupBox_living;
    QLabel *label_livingcost;
    QGroupBox *groupBox_2;
    QLabel *label_foodcost;

    void setupUi(QDialog *Cost1)
    {
        if (Cost1->objectName().isEmpty())
            Cost1->setObjectName(QStringLiteral("Cost1"));
        Cost1->resize(400, 300);
        groupBox_living = new QGroupBox(Cost1);
        groupBox_living->setObjectName(QStringLiteral("groupBox_living"));
        groupBox_living->setGeometry(QRect(20, 20, 171, 231));
        groupBox_living->setAutoFillBackground(true);
        label_livingcost = new QLabel(groupBox_living);
        label_livingcost->setObjectName(QStringLiteral("label_livingcost"));
        label_livingcost->setGeometry(QRect(10, 20, 91, 21));
        groupBox_2 = new QGroupBox(Cost1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(190, 20, 161, 231));
        label_foodcost = new QLabel(groupBox_2);
        label_foodcost->setObjectName(QStringLiteral("label_foodcost"));
        label_foodcost->setGeometry(QRect(4, 20, 91, 21));

        retranslateUi(Cost1);

        QMetaObject::connectSlotsByName(Cost1);
    } // setupUi

    void retranslateUi(QDialog *Cost1)
    {
        Cost1->setWindowTitle(QApplication::translate("Cost1", "Dialog", Q_NULLPTR));
        groupBox_living->setTitle(QString());
        label_livingcost->setText(QApplication::translate("Cost1", "Living Cost", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_foodcost->setText(QApplication::translate("Cost1", "Food cost", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cost1: public Ui_Cost1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COST1_H
