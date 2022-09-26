/********************************************************************************
** Form generated from reading UI file 'dguide.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DGUIDE_H
#define UI_DGUIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dGuide
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_symon;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_paushi;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_6;
    QLabel *label_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_next;

    void setupUi(QDialog *dGuide)
    {
        if (dGuide->objectName().isEmpty())
            dGuide->setObjectName(QStringLiteral("dGuide"));
        dGuide->resize(400, 300);
        groupBox = new QGroupBox(dGuide);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 361, 221));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 181, 241));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 141, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_symon = new QRadioButton(layoutWidget);
        radioButton_symon->setObjectName(QStringLiteral("radioButton_symon"));

        verticalLayout->addWidget(radioButton_symon);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 71, 31));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(190, 10, 181, 241));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 60, 141, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_paushi = new QRadioButton(layoutWidget1);
        radioButton_paushi->setObjectName(QStringLiteral("radioButton_paushi"));

        verticalLayout_2->addWidget(radioButton_paushi);

        radioButton_4 = new QRadioButton(layoutWidget1);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);

        radioButton_6 = new QRadioButton(layoutWidget1);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        verticalLayout_2->addWidget(radioButton_6);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 101, 31));
        pushButton_back = new QPushButton(dGuide);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(300, 10, 71, 21));
        pushButton_next = new QPushButton(dGuide);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(170, 260, 80, 31));

        retranslateUi(dGuide);

        QMetaObject::connectSlotsByName(dGuide);
    } // setupUi

    void retranslateUi(QDialog *dGuide)
    {
        dGuide->setWindowTitle(QApplication::translate("dGuide", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("dGuide", "                         Cox's Bazar                                                                ", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        radioButton_symon->setText(QApplication::translate("dGuide", "SYMON", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("dGuide", "RadioButton", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("dGuide", "RadioButton", Q_NULLPTR));
        label->setText(QApplication::translate("dGuide", "Best Hotel", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        radioButton_paushi->setText(QApplication::translate("dGuide", "PAUSHI", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("dGuide", "RadioButton", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("dGuide", "RadioButton", Q_NULLPTR));
        label_2->setText(QApplication::translate("dGuide", "Best Resturant", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("dGuide", "Back", Q_NULLPTR));
        pushButton_next->setText(QApplication::translate("dGuide", "Next", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dGuide: public Ui_dGuide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DGUIDE_H
