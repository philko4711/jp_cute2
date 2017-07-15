/********************************************************************************
** Form generated from reading UI file 'sweepermenu.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWEEPERMENU_H
#define UI_SWEEPERMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuLevel
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonPisso;
    QPushButton *pushButtonSuperpisso;
    QPushButton *pushButtonUltrasuperpisso;

    void setupUi(QWidget *MenuLevel)
    {
        if (MenuLevel->objectName().isEmpty())
            MenuLevel->setObjectName(QString::fromUtf8("MenuLevel"));
        MenuLevel->resize(394, 452);
        verticalLayout_3 = new QVBoxLayout(MenuLevel);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButtonPisso = new QPushButton(MenuLevel);
        pushButtonPisso->setObjectName(QString::fromUtf8("pushButtonPisso"));

        verticalLayout_2->addWidget(pushButtonPisso);

        pushButtonSuperpisso = new QPushButton(MenuLevel);
        pushButtonSuperpisso->setObjectName(QString::fromUtf8("pushButtonSuperpisso"));

        verticalLayout_2->addWidget(pushButtonSuperpisso);

        pushButtonUltrasuperpisso = new QPushButton(MenuLevel);
        pushButtonUltrasuperpisso->setObjectName(QString::fromUtf8("pushButtonUltrasuperpisso"));

        verticalLayout_2->addWidget(pushButtonUltrasuperpisso);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(MenuLevel);

        QMetaObject::connectSlotsByName(MenuLevel);
    } // setupUi

    void retranslateUi(QWidget *MenuLevel)
    {
        MenuLevel->setWindowTitle(QApplication::translate("MenuLevel", "SchwengelSweepo", 0, QApplication::UnicodeUTF8));
        pushButtonPisso->setText(QApplication::translate("MenuLevel", "Pisso", 0, QApplication::UnicodeUTF8));
        pushButtonSuperpisso->setText(QApplication::translate("MenuLevel", "Superpisso", 0, QApplication::UnicodeUTF8));
        pushButtonUltrasuperpisso->setText(QApplication::translate("MenuLevel", "Ultrasuperpisso", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MenuLevel: public Ui_MenuLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWEEPERMENU_H
