/********************************************************************************
** Form generated from reading UI file 'secguide.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECGUIDE_H
#define UI_SECGUIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecGuide
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_login;
    QPushButton *pushButton_creataccount;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_password;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SecGuide)
    {
        if (SecGuide->objectName().isEmpty())
            SecGuide->setObjectName(QStringLiteral("SecGuide"));
        SecGuide->resize(430, 292);
        centralWidget = new QWidget(SecGuide);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 0, 291, 241));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(10, 150, 71, 31));
        pushButton_creataccount = new QPushButton(groupBox);
        pushButton_creataccount->setObjectName(QStringLiteral("pushButton_creataccount"));
        pushButton_creataccount->setGeometry(QRect(160, 40, 111, 21));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 80, 261, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        horizontalLayout->addWidget(lineEdit_username);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 110, 261, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_password = new QLineEdit(layoutWidget1);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_password);

        SecGuide->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SecGuide);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 430, 17));
        SecGuide->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SecGuide);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SecGuide->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SecGuide);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SecGuide->setStatusBar(statusBar);

        retranslateUi(SecGuide);

        QMetaObject::connectSlotsByName(SecGuide);
    } // setupUi

    void retranslateUi(QMainWindow *SecGuide)
    {
        SecGuide->setWindowTitle(QApplication::translate("SecGuide", "Guide", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SecGuide", "LogIn", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("SecGuide", "LogIn", Q_NULLPTR));
        pushButton_creataccount->setText(QApplication::translate("SecGuide", "Creat Account", Q_NULLPTR));
        label->setText(QApplication::translate("SecGuide", "UserName", Q_NULLPTR));
        label_3->setText(QApplication::translate("SecGuide", "Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecGuide: public Ui_SecGuide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECGUIDE_H
