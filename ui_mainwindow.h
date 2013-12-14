/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Oct 4 16:48:40 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QWidget *centralWidget;
    QTabWidget *tabWidgetLocation;
    QWidget *tab;
    QLabel *labelTest;
    QLabel *label;
    QListWidget *listWidgetResultMatos;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxHeure;
    QCheckBox *checkBoxDemiJ;
    QCheckBox *checkBoxJournee;
    QCheckBox *checkBoxSemaine;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBoxMatosLoca;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayoutlocation;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEditId;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelSpe;
    QLineEdit *lineEditSpe;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelLib;
    QLineEdit *lineEditLib;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditMarque;
    QPushButton *pushButtonAjouter;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLabel *labelPrix;
    QLabel *label_8;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidgetvaliderLoca;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButtonSupprimer;
    QPushButton *pushButtonValiderlocation;
    QLabel *label_9;
    QLabel *labelCommandeReussie;
    QPushButton *pushButtonAjouterCLient;
    QLabel *label_7;
    QComboBox *comboBoxClient;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QComboBox *comboBoxPiece;
    QWidget *tab_2;
    QWidget *tab_3;
    QPushButton *pushButtonajouterNewMatos;
    QLabel *labelNewProduitajoute;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_19;
    QComboBox *comboBoxNewMatos;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditNewLib;
    QLineEdit *lineEditNewMarque;
    QLineEdit *lineEditNewAnnee;
    QLineEdit *lineEditNewTaille;
    QLineEdit *lineEditNewPh;
    QLineEdit *lineEditNewPDJ;
    QLineEdit *lineEditNewPJ;
    QLineEdit *lineEditNewPS;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QLabel *label_18;
    QLabel *label_16;
    QLabel *label_11;
    QLabel *label_17;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_13;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labelSpeAjoutMatos;
    QLineEdit *lineEditNewSpe;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 450);
        MainWindow->setMinimumSize(QSize(750, 450));
        MainWindow->setMaximumSize(QSize(750, 450));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidgetLocation = new QTabWidget(centralWidget);
        tabWidgetLocation->setObjectName(QString::fromUtf8("tabWidgetLocation"));
        tabWidgetLocation->setGeometry(QRect(0, 0, 740, 440));
        tabWidgetLocation->setMinimumSize(QSize(740, 440));
        tabWidgetLocation->setMaximumSize(QSize(740, 440));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        labelTest = new QLabel(tab);
        labelTest->setObjectName(QString::fromUtf8("labelTest"));
        labelTest->setGeometry(QRect(150, 300, 59, 17));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 121, 31));
        listWidgetResultMatos = new QListWidget(tab);
        listWidgetResultMatos->setObjectName(QString::fromUtf8("listWidgetResultMatos"));
        listWidgetResultMatos->setGeometry(QRect(10, 290, 291, 111));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 90, 417, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxHeure = new QCheckBox(layoutWidget);
        checkBoxHeure->setObjectName(QString::fromUtf8("checkBoxHeure"));

        horizontalLayout->addWidget(checkBoxHeure);

        checkBoxDemiJ = new QCheckBox(layoutWidget);
        checkBoxDemiJ->setObjectName(QString::fromUtf8("checkBoxDemiJ"));

        horizontalLayout->addWidget(checkBoxDemiJ);

        checkBoxJournee = new QCheckBox(layoutWidget);
        checkBoxJournee->setObjectName(QString::fromUtf8("checkBoxJournee"));

        horizontalLayout->addWidget(checkBoxJournee);

        checkBoxSemaine = new QCheckBox(layoutWidget);
        checkBoxSemaine->setObjectName(QString::fromUtf8("checkBoxSemaine"));

        horizontalLayout->addWidget(checkBoxSemaine);


        horizontalLayout_2->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 90, 250, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBoxMatosLoca = new QComboBox(layoutWidget1);
        comboBoxMatosLoca->setObjectName(QString::fromUtf8("comboBoxMatosLoca"));

        horizontalLayout_3->addWidget(comboBoxMatosLoca);

        layoutWidget2 = new QWidget(tab);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 130, 251, 131));
        verticalLayoutlocation = new QVBoxLayout(layoutWidget2);
        verticalLayoutlocation->setSpacing(6);
        verticalLayoutlocation->setContentsMargins(11, 11, 11, 11);
        verticalLayoutlocation->setObjectName(QString::fromUtf8("verticalLayoutlocation"));
        verticalLayoutlocation->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        lineEditId = new QLineEdit(layoutWidget2);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));

        horizontalLayout_7->addWidget(lineEditId);


        verticalLayoutlocation->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelSpe = new QLabel(layoutWidget2);
        labelSpe->setObjectName(QString::fromUtf8("labelSpe"));

        horizontalLayout_4->addWidget(labelSpe);

        lineEditSpe = new QLineEdit(layoutWidget2);
        lineEditSpe->setObjectName(QString::fromUtf8("lineEditSpe"));

        horizontalLayout_4->addWidget(lineEditSpe);


        verticalLayoutlocation->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelLib = new QLabel(layoutWidget2);
        labelLib->setObjectName(QString::fromUtf8("labelLib"));

        horizontalLayout_6->addWidget(labelLib);

        lineEditLib = new QLineEdit(layoutWidget2);
        lineEditLib->setObjectName(QString::fromUtf8("lineEditLib"));

        horizontalLayout_6->addWidget(lineEditLib);


        verticalLayoutlocation->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditMarque = new QLineEdit(layoutWidget2);
        lineEditMarque->setObjectName(QString::fromUtf8("lineEditMarque"));

        horizontalLayout_5->addWidget(lineEditMarque);


        verticalLayoutlocation->addLayout(horizontalLayout_5);

        pushButtonAjouter = new QPushButton(tab);
        pushButtonAjouter->setObjectName(QString::fromUtf8("pushButtonAjouter"));
        pushButtonAjouter->setGeometry(QRect(310, 370, 31, 27));
        layoutWidget3 = new QWidget(tab);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(390, 120, 167, 19));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        labelPrix = new QLabel(layoutWidget3);
        labelPrix->setObjectName(QString::fromUtf8("labelPrix"));

        horizontalLayout_8->addWidget(labelPrix);

        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        layoutWidget4 = new QWidget(tab);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(387, 138, 321, 261));
        verticalLayout = new QVBoxLayout(layoutWidget4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidgetvaliderLoca = new QListWidget(layoutWidget4);
        listWidgetvaliderLoca->setObjectName(QString::fromUtf8("listWidgetvaliderLoca"));

        verticalLayout->addWidget(listWidgetvaliderLoca);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButtonSupprimer = new QPushButton(layoutWidget4);
        pushButtonSupprimer->setObjectName(QString::fromUtf8("pushButtonSupprimer"));

        horizontalLayout_9->addWidget(pushButtonSupprimer);

        pushButtonValiderlocation = new QPushButton(layoutWidget4);
        pushButtonValiderlocation->setObjectName(QString::fromUtf8("pushButtonValiderlocation"));

        horizontalLayout_9->addWidget(pushButtonValiderlocation);


        verticalLayout->addLayout(horizontalLayout_9);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 270, 201, 17));
        labelCommandeReussie = new QLabel(tab);
        labelCommandeReussie->setObjectName(QString::fromUtf8("labelCommandeReussie"));
        labelCommandeReussie->setGeometry(QRect(230, 20, 321, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Chancery L"));
        font.setPointSize(20);
        font.setItalic(true);
        labelCommandeReussie->setFont(font);
        pushButtonAjouterCLient = new QPushButton(tab);
        pushButtonAjouterCLient->setObjectName(QString::fromUtf8("pushButtonAjouterCLient"));
        pushButtonAjouterCLient->setGeometry(QRect(200, 50, 31, 31));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(22, 52, 44, 17));
        comboBoxClient = new QComboBox(tab);
        comboBoxClient->setObjectName(QString::fromUtf8("comboBoxClient"));
        comboBoxClient->setGeometry(QRect(70, 50, 111, 27));
        comboBoxClient->setMinimumSize(QSize(50, 0));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(271, 51, 251, 29));
        horizontalLayout_10 = new QHBoxLayout(widget);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        comboBoxPiece = new QComboBox(widget);
        comboBoxPiece->setObjectName(QString::fromUtf8("comboBoxPiece"));

        horizontalLayout_10->addWidget(comboBoxPiece);

        tabWidgetLocation->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidgetLocation->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pushButtonajouterNewMatos = new QPushButton(tab_3);
        pushButtonajouterNewMatos->setObjectName(QString::fromUtf8("pushButtonajouterNewMatos"));
        pushButtonajouterNewMatos->setGeometry(QRect(421, 360, 211, 27));
        labelNewProduitajoute = new QLabel(tab_3);
        labelNewProduitajoute->setObjectName(QString::fromUtf8("labelNewProduitajoute"));
        labelNewProduitajoute->setGeometry(QRect(80, 70, 481, 101));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelNewProduitajoute->sizePolicy().hasHeightForWidth());
        labelNewProduitajoute->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nimbus Mono L"));
        font1.setPointSize(20);
        labelNewProduitajoute->setFont(font1);
        layoutWidget5 = new QWidget(tab_3);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(30, 30, 255, 29));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget5);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_11->addWidget(label_19);

        comboBoxNewMatos = new QComboBox(layoutWidget5);
        comboBoxNewMatos->setObjectName(QString::fromUtf8("comboBoxNewMatos"));

        horizontalLayout_11->addWidget(comboBoxNewMatos);

        layoutWidget6 = new QWidget(tab_3);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(205, 122, 131, 260));
        verticalLayout_2 = new QVBoxLayout(layoutWidget6);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditNewLib = new QLineEdit(layoutWidget6);
        lineEditNewLib->setObjectName(QString::fromUtf8("lineEditNewLib"));

        verticalLayout_2->addWidget(lineEditNewLib);

        lineEditNewMarque = new QLineEdit(layoutWidget6);
        lineEditNewMarque->setObjectName(QString::fromUtf8("lineEditNewMarque"));

        verticalLayout_2->addWidget(lineEditNewMarque);

        lineEditNewAnnee = new QLineEdit(layoutWidget6);
        lineEditNewAnnee->setObjectName(QString::fromUtf8("lineEditNewAnnee"));

        verticalLayout_2->addWidget(lineEditNewAnnee);

        lineEditNewTaille = new QLineEdit(layoutWidget6);
        lineEditNewTaille->setObjectName(QString::fromUtf8("lineEditNewTaille"));

        verticalLayout_2->addWidget(lineEditNewTaille);

        lineEditNewPh = new QLineEdit(layoutWidget6);
        lineEditNewPh->setObjectName(QString::fromUtf8("lineEditNewPh"));

        verticalLayout_2->addWidget(lineEditNewPh);

        lineEditNewPDJ = new QLineEdit(layoutWidget6);
        lineEditNewPDJ->setObjectName(QString::fromUtf8("lineEditNewPDJ"));

        verticalLayout_2->addWidget(lineEditNewPDJ);

        lineEditNewPJ = new QLineEdit(layoutWidget6);
        lineEditNewPJ->setObjectName(QString::fromUtf8("lineEditNewPJ"));

        verticalLayout_2->addWidget(lineEditNewPJ);

        lineEditNewPS = new QLineEdit(layoutWidget6);
        lineEditNewPS->setObjectName(QString::fromUtf8("lineEditNewPS"));

        verticalLayout_2->addWidget(lineEditNewPS);

        layoutWidget7 = new QWidget(tab_3);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(31, 122, 167, 261));
        verticalLayout_3 = new QVBoxLayout(layoutWidget7);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);

        label_18 = new QLabel(layoutWidget7);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_3->addWidget(label_18);

        label_16 = new QLabel(layoutWidget7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_3->addWidget(label_16);

        label_11 = new QLabel(layoutWidget7);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_3->addWidget(label_11);

        label_17 = new QLabel(layoutWidget7);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_3->addWidget(label_17);

        label_14 = new QLabel(layoutWidget7);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_3->addWidget(label_14);

        label_15 = new QLabel(layoutWidget7);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_3->addWidget(label_15);

        label_13 = new QLabel(layoutWidget7);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_3->addWidget(label_13);

        layoutWidget8 = new QWidget(tab_3);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(382, 120, 137, 29));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        labelSpeAjoutMatos = new QLabel(layoutWidget8);
        labelSpeAjoutMatos->setObjectName(QString::fromUtf8("labelSpeAjoutMatos"));

        horizontalLayout_12->addWidget(labelSpeAjoutMatos);

        lineEditNewSpe = new QLineEdit(layoutWidget8);
        lineEditNewSpe->setObjectName(QString::fromUtf8("lineEditNewSpe"));

        horizontalLayout_12->addWidget(lineEditNewSpe);

        tabWidgetLocation->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidgetLocation->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        labelTest->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Nouvelle location !", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Dur\303\251e :", 0, QApplication::UnicodeUTF8));
        checkBoxHeure->setText(QApplication::translate("MainWindow", "Heure", 0, QApplication::UnicodeUTF8));
        checkBoxDemiJ->setText(QApplication::translate("MainWindow", "Demi Journee", 0, QApplication::UnicodeUTF8));
        checkBoxJournee->setText(QApplication::translate("MainWindow", "Journ\303\251e", 0, QApplication::UnicodeUTF8));
        checkBoxSemaine->setText(QApplication::translate("MainWindow", "Semaine", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Type de materiel :", 0, QApplication::UnicodeUTF8));
        comboBoxMatosLoca->clear();
        comboBoxMatosLoca->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Luge", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Paire de Batons", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Paire de Skis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Surf", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("MainWindow", "Id", 0, QApplication::UnicodeUTF8));
        labelSpe->setText(QString());
        labelLib->setText(QApplication::translate("MainWindow", "Libelle :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Marque", 0, QApplication::UnicodeUTF8));
        pushButtonAjouter->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Prix : ", 0, QApplication::UnicodeUTF8));
        labelPrix->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "\342\202\254", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButtonValiderlocation->setText(QApplication::translate("MainWindow", "Valider", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Les \303\251l\303\251ments du local : ", 0, QApplication::UnicodeUTF8));
        labelCommandeReussie->setText(QString());
        pushButtonAjouterCLient->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Client :", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Type Justificatif :", 0, QApplication::UnicodeUTF8));
        comboBoxPiece->clear();
        comboBoxPiece->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Piece Identit\303\251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Permis de conduire", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Passeport", 0, QApplication::UnicodeUTF8)
        );
        tabWidgetLocation->setTabText(tabWidgetLocation->indexOf(tab), QApplication::translate("MainWindow", "Location", 0, QApplication::UnicodeUTF8));
        tabWidgetLocation->setTabText(tabWidgetLocation->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0, QApplication::UnicodeUTF8));
        pushButtonajouterNewMatos->setText(QApplication::translate("MainWindow", "Ajouter ce materiel au local", 0, QApplication::UnicodeUTF8));
        labelNewProduitajoute->setText(QString());
        label_19->setText(QApplication::translate("MainWindow", "Type de materiel :", 0, QApplication::UnicodeUTF8));
        comboBoxNewMatos->clear();
        comboBoxNewMatos->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Luge", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Paire de Batons", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Paire deSkis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Surf", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("MainWindow", "Libelle :", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Marque :", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Ann\303\251 de mise en service :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Taille :", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Prix heure :", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Prix Demie Journ\303\251e :", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Prix Journ\303\251e :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Prix Semaine :", 0, QApplication::UnicodeUTF8));
        labelSpeAjoutMatos->setText(QString());
        tabWidgetLocation->setTabText(tabWidgetLocation->indexOf(tab_3), QApplication::translate("MainWindow", "Ajouter un materiel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
