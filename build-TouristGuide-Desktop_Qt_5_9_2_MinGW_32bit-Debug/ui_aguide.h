/********************************************************************************
** Form generated from reading UI file 'aguide.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGUIDE_H
#define UI_AGUIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aGuide
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_createaccount;
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;

    void setupUi(QDialog *aGuide)
    {
        if (aGuide->objectName().isEmpty())
            aGuide->setObjectName(QStringLiteral("aGuide"));
        aGuide->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(aGuide->sizePolicy().hasHeightForWidth());
        aGuide->setSizePolicy(sizePolicy);
        aGuide->setAutoFillBackground(false);
        aGuide->setStyleSheet(QStringLiteral("border-color:red;"));
        groupBox = new QGroupBox(aGuide);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 20, 371, 251));
        groupBox->setAutoFillBackground(true);
        pushButton_createaccount = new QPushButton(groupBox);
        pushButton_createaccount->setObjectName(QStringLiteral("pushButton_createaccount"));
        pushButton_createaccount->setGeometry(QRect(240, 20, 121, 41));
        pushButton_createaccount->setStyleSheet(QLatin1String("border-color: rgb(0, 47, 0);\n"
"background-color: rgb(0, 170, 0);"));
        pushButton_back = new QPushButton(groupBox);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(270, 210, 91, 31));
        pushButton_back->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"border-color: rgb(0, 0, 255);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 191, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout->addWidget(lineEdit_username);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 120, 191, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_password = new QLineEdit(layoutWidget1);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_password);

        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(10, 210, 91, 31));
        pushButton_login->setAutoFillBackground(false);

        retranslateUi(aGuide);

        QMetaObject::connectSlotsByName(aGuide);
    } // setupUi

    void retranslateUi(QDialog *aGuide)
    {
        aGuide->setWindowTitle(QApplication::translate("aGuide", "Dialog", Q_NULLPTR));
        aGuide->setProperty("statusBar", QVariant(QString()));
        groupBox->setTitle(QString());
        pushButton_createaccount->setText(QApplication::translate("aGuide", "Create Account", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("aGuide", "Back", Q_NULLPTR));
        label->setText(QApplication::translate("aGuide", "UserName", Q_NULLPTR));
        label_2->setText(QApplication::translate("aGuide", "Password", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("aGuide", "LogIn", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class aGuide: public Ui_aGuide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGUIDE_H
