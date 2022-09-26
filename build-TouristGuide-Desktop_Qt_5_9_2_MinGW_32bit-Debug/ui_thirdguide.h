/********************************************************************************
** Form generated from reading UI file 'thirdguide.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDGUIDE_H
#define UI_THIRDGUIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ThirdGuide
{
public:
    QLabel *label;

    void setupUi(QDialog *ThirdGuide)
    {
        if (ThirdGuide->objectName().isEmpty())
            ThirdGuide->setObjectName(QStringLiteral("ThirdGuide"));
        ThirdGuide->resize(400, 300);
        label = new QLabel(ThirdGuide);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 381, 241));

        retranslateUi(ThirdGuide);

        QMetaObject::connectSlotsByName(ThirdGuide);
    } // setupUi

    void retranslateUi(QDialog *ThirdGuide)
    {
        ThirdGuide->setWindowTitle(QApplication::translate("ThirdGuide", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ThirdGuide", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:600; color:#ff5500;\">WELCOME         </span></h1><h3 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:large; font-weight:600; color:#00aa00;\">TO             </span></h3><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:600; color:#ff0000;\">The Tourist Guide        </span></h1></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ThirdGuide: public Ui_ThirdGuide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDGUIDE_H
