/********************************************************************************
** Form generated from reading UI file 'guide.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDE_H
#define UI_GUIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Guide
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_user;
    QPushButton *pushButton_admin;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *Guide)
    {
        if (Guide->objectName().isEmpty())
            Guide->setObjectName(QStringLiteral("Guide"));
        Guide->resize(422, 284);
        QFont font;
        font.setPointSize(20);
        Guide->setFont(font);
        Guide->setStyleSheet(QStringLiteral("color = red;"));
        centralWidget = new QWidget(Guide);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_user = new QPushButton(centralWidget);
        pushButton_user->setObjectName(QStringLiteral("pushButton_user"));
        pushButton_user->setGeometry(QRect(130, 40, 141, 51));
        pushButton_user->setStyleSheet(QLatin1String("color:blue;\n"
"font-size:30px; "));
        pushButton_admin = new QPushButton(centralWidget);
        pushButton_admin->setObjectName(QStringLiteral("pushButton_admin"));
        pushButton_admin->setGeometry(QRect(130, 110, 141, 51));
        pushButton_admin->setStyleSheet(QLatin1String("color:red;\n"
"font-size:30px;"));
        Guide->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Guide);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 422, 17));
        Guide->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Guide);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Guide->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(Guide);

        QMetaObject::connectSlotsByName(Guide);
    } // setupUi

    void retranslateUi(QMainWindow *Guide)
    {
        Guide->setWindowTitle(QApplication::translate("Guide", "Guide", Q_NULLPTR));
        pushButton_user->setText(QApplication::translate("Guide", "USER", Q_NULLPTR));
        pushButton_admin->setText(QApplication::translate("Guide", "ADMIN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Guide: public Ui_Guide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDE_H
