/********************************************************************************
** Form generated from reading UI file 'nouveauclient.ui'
**
** Created: Fri Oct 4 15:38:13 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOUVEAUCLIENT_H
#define UI_NOUVEAUCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NouveauClient
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *NouveauClient)
    {
        if (NouveauClient->objectName().isEmpty())
            NouveauClient->setObjectName(QString::fromUtf8("NouveauClient"));
        NouveauClient->resize(337, 259);
        NouveauClient->setStyleSheet(QString::fromUtf8("background:qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        label = new QLabel(NouveauClient);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 40, 111, 41));
        label->setStyleSheet(QString::fromUtf8("color:white;"));
        widget = new QWidget(NouveauClient);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 100, 191, 64));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color:white;"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        widget1 = new QWidget(NouveauClient);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(80, 200, 158, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_2->addWidget(pushButton_2);


        retranslateUi(NouveauClient);

        QMetaObject::connectSlotsByName(NouveauClient);
    } // setupUi

    void retranslateUi(QDialog *NouveauClient)
    {
        NouveauClient->setWindowTitle(QApplication::translate("NouveauClient", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NouveauClient", "Nouveau client !", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NouveauClient", "Nom :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NouveauClient", "Prenom :", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("NouveauClient", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("NouveauClient", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NouveauClient: public Ui_NouveauClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOUVEAUCLIENT_H
