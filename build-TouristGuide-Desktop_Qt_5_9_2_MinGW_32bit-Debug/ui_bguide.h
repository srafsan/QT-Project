/********************************************************************************
** Form generated from reading UI file 'bguide.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BGUIDE_H
#define UI_BGUIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_bGuide
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_back;
    QLabel *label;
    QPushButton *pushButton_next;
    QPushButton *pushButton;

    void setupUi(QDialog *bGuide)
    {
        if (bGuide->objectName().isEmpty())
            bGuide->setObjectName(QStringLiteral("bGuide"));
        bGuide->resize(400, 300);
        groupBox = new QGroupBox(bGuide);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 381, 251));
        pushButton_back = new QPushButton(groupBox);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(10, 20, 81, 31));
        pushButton_back->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 60, 291, 131));
        pushButton_next = new QPushButton(groupBox);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(290, 210, 81, 31));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 20, 61, 31));

        retranslateUi(bGuide);
        QObject::connect(pushButton, SIGNAL(clicked()), bGuide, SLOT(close()));

        QMetaObject::connectSlotsByName(bGuide);
    } // setupUi

    void retranslateUi(QDialog *bGuide)
    {
        bGuide->setWindowTitle(QApplication::translate("bGuide", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_back->setText(QApplication::translate("bGuide", "Back", Q_NULLPTR));
        label->setText(QApplication::translate("bGuide", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600; color:#ff5500;\">WELCOME</span></h1><h3 align=\"center\" style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:large; font-weight:600; color:#ffaa00;\">TO</span></h3><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:600; color:#0000ff;\">The Tourist Guide </span></h1><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        pushButton_next->setText(QApplication::translate("bGuide", "Next", Q_NULLPTR));
        pushButton->setText(QApplication::translate("bGuide", "Exist", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bGuide: public Ui_bGuide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BGUIDE_H
