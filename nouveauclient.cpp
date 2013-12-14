#include "nouveauclient.h"
#include "ui_nouveauclient.h"
#include "local.h"
#include "location.h"
#include <qdebug.h>
#include <mysql.h>
#include <iostream>
#include <QListWidgetItem>
#include <QMessageBox>


NouveauClient::NouveauClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NouveauClient)
{
    ui->setupUi(this);
}

NouveauClient::~NouveauClient()
{
    delete ui;
}

void NouveauClient::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void NouveauClient::on_pushButton_2_clicked()
{
    reject();
}

void NouveauClient::on_pushButton_clicked()
{
    if(ui->lineEdit->text().length()*ui->lineEdit_2->text().length()>0)
    {
        MYSQL_ROW row;
        MYSQL_RES *confres;
        QString maReq="insert into client values(null,'"+ui->lineEdit->text()+"','"+ui->lineEdit_2->text()+"')";
        string r1=maReq.toStdString();
        mysql_query(((MainWindow *)parent())->getConnexion(),r1.c_str());

        ((MainWindow *)parent())->getClient();
    accept();

    }
}
