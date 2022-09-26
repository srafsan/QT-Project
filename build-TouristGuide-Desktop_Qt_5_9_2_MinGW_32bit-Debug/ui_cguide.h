/********************************************************************************
** Form generated from reading UI file 'cguide.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGUIDE_H
#define UI_CGUIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cGuide
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *pushButton_7;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_coxsbazar;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *cGuide)
    {
        if (cGuide->objectName().isEmpty())
            cGuide->setObjectName(QStringLiteral("cGuide"));
        cGuide->resize(400, 300);
        groupBox = new QGroupBox(cGuide);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 401, 301));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 211, 21));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(319, 20, 71, 31));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 70, 261, 161));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_coxsbazar = new QPushButton(widget);
        pushButton_coxsbazar->setObjectName(QStringLiteral("pushButton_coxsbazar"));

        verticalLayout->addWidget(pushButton_coxsbazar);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(cGuide);
        QObject::connect(pushButton_7, SIGNAL(clicked()), cGuide, SLOT(close()));

        QMetaObject::connectSlotsByName(cGuide);
    } // setupUi

    void retranslateUi(QDialog *cGuide)
    {
        cGuide->setWindowTitle(QApplication::translate("cGuide", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("cGuide", "Choose Your Favourite Place", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("cGuide", "Exist", Q_NULLPTR));
        pushButton_coxsbazar->setText(QApplication::translate("cGuide", "COX's BAZAR", Q_NULLPTR));
        pushButton->setText(QApplication::translate("cGuide", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("cGuide", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("cGuide", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("cGuide", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("cGuide", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cGuide: public Ui_cGuide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGUIDE_H
