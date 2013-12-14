#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "local.h"
#include "location.h"
#include <qdebug.h>
#include <mysql.h>
#include <iostream>
#include <QListWidgetItem>
#include <QMessageBox>
#include "nouveauclient.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    VieworNot(false);VieworNot2(false);
    Connection();
    ui->checkBoxHeure->setChecked(true);
    prix=0;
    getClient();
    getPiece();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
void MainWindow::VieworNot(bool tof)
{

    ui->lineEditId->setVisible(tof);
    ui->lineEditLib->setVisible(tof);
    ui->lineEditMarque->setVisible(tof);
    ui->lineEditSpe->setVisible(tof);
    ui->labelLib->setVisible(tof);
    ui->labelSpe->setVisible(tof);
    ui->label_5->setVisible(tof);
    ui->label_4->setVisible(tof);
    ui->listWidgetResultMatos->setVisible(tof);
    ui->label_6->setVisible(tof);
    ui->label_9->setVisible(tof);
    ui->label_8->setVisible(tof);
    ui->pushButtonAjouter->setVisible(tof);
     ui->labelCommandeReussie->clear();

}
void MainWindow::VieworNot2(bool tof)
{

   ui->lineEditNewLib->setVisible(tof);
   ui->lineEditNewAnnee->setVisible(tof);
   ui->lineEditNewMarque->setVisible(tof);
   ui->lineEditNewPDJ->setVisible(tof);
   ui->lineEditNewPh->setVisible(tof);
   ui->lineEditNewPJ->setVisible(tof);
   ui->lineEditNewPS->setVisible(tof);
   ui->lineEditNewSpe->setVisible(tof);
   ui->lineEditNewTaille->setVisible(tof);

   ui->label_18->setVisible(tof);
   ui->label_17->setVisible(tof);
   ui->label_16->setVisible(tof);
   ui->label_15->setVisible(tof);
   ui->label_14->setVisible(tof);
   ui->label_13->setVisible(tof);
   ui->labelSpeAjoutMatos->setVisible(tof);
   ui->label_11->setVisible(tof);
   ui->label_10->setVisible(tof);

   ui->pushButtonajouterNewMatos->setVisible(tof);


}
QString MainWindow::returnSpe(QString c)
{
    if(c=="matiere")
    {
        return "Matière";
    }
    if(c=="couleur")
    {
        return "Couleur";
    }
    if(c=="typeDeSki")
    {
        return "Type de Skis";
    }
    if(c=="pied")
    {
        return "Pied";
    }
}

void MainWindow::Connection()
{

    MYSQL * maCo=mysql_init(NULL);
    if(mysql_real_connect(maCo,"127.0.0.1","admin","ini01","dblocation",3306,"Cyril",0)!=NULL)
    {
            qDebug()<<"It works pretty well man ! ";
            //local monLOcal("le local test",maCo);
            con=maCo;


    }
    else
    {
            qDebug()<<"It works pretty bad man ! ";

    }


}
void MainWindow::on_comboBoxMatosLoca_activated(int rep)
{
   VieworNot(true);

    //requette

    if(ui->lineEditId->text().length()>0)ui->lineEditId->clear();
    if(ui->lineEditLib->text().length()>0)ui->lineEditLib->clear();
    if(ui->lineEditMarque->text().length()>0)ui->lineEditMarque->clear();
    if(ui->lineEditSpe->text().length()>0)ui->lineEditSpe->clear();
   MYSQL_ROW row;
   MYSQL_RES *confres;
   MYSQL * maConnexion=getConnexion();

   string matosTable=getLibMatos(rep).toStdString();
   matosTable=getLibMatos(rep).toStdString();
   string matos="show fields from "+matosTable;

   mysql_query(maConnexion,matos.c_str());
           confres = mysql_store_result(maConnexion);
    int noP=0;
    while(( row = mysql_fetch_row(confres)))
     {
        noP++;
        if(noP==2) ui->labelSpe->setText(returnSpe(QString::fromStdString(string(row[0]))));
        matos=row[0];
        ui->labelSpe->setText(ui->labelSpe->text()+" :");
      }
    table=QString::fromStdString(matosTable);
    champSpe=QString::fromStdString(matos);
    this->remplirListMatosLoca(QString::fromStdString(matosTable),QString::fromStdString(matos));


}
QString MainWindow::getLibMatos(int i)
{
    if(i==0)return "luge";
    if(i==2)return "paireDeSki";
    if(i==1)return "paireDeBaton";
    if(i==3)return "surf";


}
void MainWindow::remplirListMatosLoca(QString c1,QString c2)
{
    MYSQL_ROW row;
    MYSQL_RES *confres;
    MYSQL * maConnexion2=getConnexion();

ui->listWidgetResultMatos->clear();
idListMatos.clear();
      string req="select * from local inner join materiel on local.id=materiel.id inner join "+c1.toStdString()+" on materiel.id="+c1.toStdString()+".id where materiel.id like '%"+ui->lineEditId->text().toStdString()+"%' and libelle like '%"+ui->lineEditLib->text().toStdString()+"%' and marque like '%"+ui->lineEditMarque->text().toStdString()+"%' and "+c2.toStdString()+" like '%"+ui->lineEditSpe->text().toStdString()+"%'";

    mysql_query(maConnexion2,req.c_str());
     confres = mysql_store_result(maConnexion2);
          listMatos.clear();
     while(( row = mysql_fetch_row(confres)))
      {

         string affiche=string(row[0])+" | "+string(row[2])+" | "+string(row[3])+" | "+string(row[11]);
         ui->listWidgetResultMatos->addItem(affiche.c_str());
            listMatos.push_back(QString::fromStdString(affiche));

           idListMatos.push_back(QString::fromStdString(string(row[0])).toInt());


       }

}

void MainWindow::on_checkBoxDemiJ_clicked()
{
    ui->checkBoxHeure->setChecked(false);
    ui->checkBoxSemaine->setChecked(false);
    ui->checkBoxJournee->setChecked(false);
      if(idListMatosAConfirmer.size()>0)calculPrix();
}

void MainWindow::on_checkBoxJournee_clicked()
{
    ui->checkBoxHeure->setChecked(false);
    ui->checkBoxSemaine->setChecked(false);
    ui->checkBoxDemiJ->setChecked(false);
      if(idListMatosAConfirmer.size()>0)calculPrix();
}

void MainWindow::on_checkBoxSemaine_clicked()
{
    ui->checkBoxHeure->setChecked(false);
    ui->checkBoxDemiJ->setChecked(false);
    ui->checkBoxJournee->setChecked(false);
     if(idListMatosAConfirmer.size()>0)calculPrix();
}

void MainWindow::on_checkBoxHeure_clicked()
{
    ui->checkBoxDemiJ->setChecked(false);
    ui->checkBoxSemaine->setChecked(false);
    ui->checkBoxJournee->setChecked(false);
     if(idListMatosAConfirmer.size()>0)calculPrix();
}
QString MainWindow::isChecked()
{

    if( ui->checkBoxDemiJ->isChecked()) return "prixDemieJournee";
    if( ui->checkBoxHeure->isChecked()) return "prixHeure ";
    if( ui->checkBoxJournee->isChecked()) return "prixJournee" ;
    if( ui->checkBoxSemaine->isChecked()) return "prixSemaine";

}
QString MainWindow::getDuree()
{

    if( ui->checkBoxDemiJ->isChecked()) return "DemieJournee";
    if( ui->checkBoxHeure->isChecked()) return "Heure ";
    if( ui->checkBoxJournee->isChecked()) return "Journee" ;
    if( ui->checkBoxSemaine->isChecked()) return "Semaine";

}
void MainWindow::on_pushButtonValiderlocation_clicked()
{
    MYSQL_ROW row;
    MYSQL_RES *confres;
    string req="insert into location values(null,'"+QString::number(idClient.value(ui->comboBoxClient->currentIndex())).toStdString()+"','"+ui->labelPrix->text().toStdString()+"','"+ui->comboBoxPiece->currentText().toStdString()+"','"+getDuree().toStdString()+"')";
   
    mysql_query(getConnexion(),req.c_str());

    string req2="select idLoca from location order by idLoca desc";
    mysql_query(getConnexion(),req2.c_str());
    confres = mysql_store_result(getConnexion());
    row = mysql_fetch_row(confres);
    // {

    for(int i=0;i<idListMatosAConfirmer.size();i++)
    {


        string req3="insert into matosLoue values("+string(row[0])+","+QString::number(idListMatosAConfirmer.at(i)).toStdString()+")";
       
        mysql_query(getConnexion(),req3.c_str());
    }
    ui->listWidgetvaliderLoca->clear();
    ui->listWidgetResultMatos->clear();
    ui->labelPrix->clear();
    VieworNot(false);
    ui->lineEditId->clear();
    ui->lineEditLib->clear();
    ui->lineEditMarque->clear();
    ui->lineEditSpe->clear();
    idListMatos.clear();
    idListMatosAConfirmer.clear();
    ui->labelCommandeReussie->setText("Commande réussie ! ");


}

void MainWindow::on_lineEditId_cursorPositionChanged(int , int )
{

remplirListMatosLoca(table,champSpe);
}

void MainWindow::on_lineEditSpe_cursorPositionChanged(int , int )
{
    remplirListMatosLoca(table,champSpe);

}

void MainWindow::on_lineEditLib_cursorPositionChanged(int , int )
{
    remplirListMatosLoca(table,champSpe);

}

void MainWindow::on_lineEditMarque_cursorPositionChanged(int , int )
{
    remplirListMatosLoca(table,champSpe);

}

void MainWindow::on_pushButtonAjouter_clicked()
{
if(ui->listWidgetResultMatos->currentIndex().row()>=0)
    {
    int idMat=idListMatos.value(ui->listWidgetResultMatos->currentIndex().row());
   ui->listWidgetvaliderLoca->addItem(listMatos.at(ui->listWidgetResultMatos->currentIndex().row()));
   idListMatosAConfirmer.push_back(idMat);
   string req="delete from local where id="+QString::number(idMat).toStdString();
   mysql_query(getConnexion(),req.c_str());
     remplirListMatosLoca(table,champSpe);


     ui->labelPrix->setText(QString::number(getPrix(idMat)));
    }
else
{
    QMessageBox msgBox;
    msgBox.setText("Vous n'avez rien sélectionné.");
    msgBox.exec();
}

}

void MainWindow::on_pushButtonSupprimer_clicked()
{
  if(ui->listWidgetvaliderLoca->currentIndex().row()>=0)
    {

    string req="insert into local values("+QString::number(idListMatosAConfirmer.value(ui->listWidgetvaliderLoca->currentIndex().row())).toStdString()+")";
    mysql_query(getConnexion(),req.c_str());
   remplirListMatosLoca(table,champSpe);

     idListMatosAConfirmer.remove(ui->listWidgetvaliderLoca->currentIndex().row());
     QListWidgetItem * item = ui->listWidgetvaliderLoca->currentItem();
        delete item;
        calculPrix();
    }
  else
  {
      QMessageBox msgBox;
      msgBox.setText("Vous n'avez rien sélectionné.");
      msgBox.exec();
  }
}
int MainWindow::getPrix(int id)
{
    MYSQL_ROW row;
    MYSQL_RES *confres;
    string req="select "+isChecked().toStdString()+" from materiel where id ="+QString::number(id).toStdString();

    mysql_query(getConnexion(),req.c_str());
    confres = mysql_store_result(getConnexion());
    while(( row = mysql_fetch_row(confres)))
     {
        prix+=QString::fromStdString(string(row[0])).toInt();
     }
    return prix;

}
void MainWindow::calculPrix()
{
    MYSQL_ROW row;
    MYSQL_RES *confres;
    vector <int> v;
    prix=0;
   string req2,req="select * from local";

    mysql_query(getConnexion(),req.c_str());
    confres = mysql_store_result(getConnexion());
    if(mysql_num_rows(confres)>0)
    {
        qDebug()<<"La!";
     while(( row = mysql_fetch_row(confres)))
     {
        v.push_back(QString::fromStdString(string(row[0])).toInt());

     }

    for(int n=0;n<v.size();n++)
    {
        if(n==0)
        {
           req2 ="select * from materiel where id!="+QString::number(v.at(n)).toStdString();
        }
        else
        {
            req2+=" and id != "+QString::number(v.at(n)).toStdString();
        }

    }
    }
    else
    {
        qDebug()<<"here";
        req2="select * from materiel";
    }
    mysql_query(getConnexion(),req2.c_str());
    confres = mysql_store_result(getConnexion());
    while(( row = mysql_fetch_row(confres)))
     {

        getPrix(QString::fromStdString(string(row[0])).toInt());

     }
    //qDebug()<<prix;

    ui->labelPrix->setText(QString::number(prix));
}
void MainWindow::getClient()
{
    ui->comboBoxClient->clear();
    MYSQL_ROW row;
    MYSQL_RES *confres;
    string req="select id,nom,prenom from client";

    mysql_query(getConnexion(),req.c_str());
    confres = mysql_store_result(getConnexion());
    while(( row = mysql_fetch_row(confres)))
     {
        QString client=QString::fromStdString(string(row[1]))+" "+QString::fromStdString(string(row[2]));
        ui->comboBoxClient->addItem(client);
        idClient.push_back(QString::fromStdString(string(row[0])).toInt());
     }
}
void MainWindow::getPiece()
{
    ui->comboBoxPiece->clear();
    MYSQL_ROW row;
    MYSQL_RES *confres;
    string req="select piece from piece";

    mysql_query(getConnexion(),req.c_str());
    confres = mysql_store_result(getConnexion());
    while(( row = mysql_fetch_row(confres)))
     {
        QString client=QString::fromStdString(string(row[0]));
        ui->comboBoxPiece->addItem(client);

     }
}


void MainWindow::on_comboBoxNewMatos_activated(int rep)
{
    VieworNot2(true);
    MYSQL_ROW row;
    MYSQL_RES *confres;
    MYSQL * maConnexion=getConnexion();
    ui->labelNewProduitajoute->clear();
    string matosTable=getLibMatos(rep).toStdString();
    matosTable=getLibMatos(rep).toStdString();
    string matos="show fields from "+matosTable;

    mysql_query(maConnexion,matos.c_str());
      confres = mysql_store_result(maConnexion);
     int noP=0;

     while(( row = mysql_fetch_row(confres)))
      {
         noP++;

         if(noP==2) ui->labelSpeAjoutMatos->setText(returnSpe(QString::fromStdString(string(row[0])))+" :");

         qDebug()<<QString::fromStdString(string(row[0]));

       }

}

void MainWindow::on_pushButtonajouterNewMatos_clicked()
{

    if(ui->lineEditNewTaille->text().length()*ui->lineEditNewSpe->text().length()*ui->lineEditNewAnnee->text().length()*ui->lineEditNewLib->text().length()*ui->lineEditNewMarque->text().length()*ui->lineEditNewPDJ->text().length()*ui->lineEditNewPh->text().length()*ui->lineEditNewPJ->text().length()*ui->lineEditNewPS->text().length()>0)
    {      
        MYSQL_ROW row;
        MYSQL_RES *confres;
        QString maReq="insert into materiel values(null,'"+ui->lineEditNewLib->text()+"','"+ui->lineEditNewMarque->text()+"',"+ui->lineEditNewAnnee->text()+","+ui->lineEditNewTaille->text()+","+ui->lineEditNewPh->text()+","+ui->lineEditNewPDJ->text()+","+ui->lineEditNewPJ->text()+","+ui->lineEditNewPS->text()+")";
        string r1=maReq.toStdString();
        mysql_query(getConnexion(),r1.c_str());

        string temp="select id from materiel order by id desc";
        mysql_query(getConnexion(),temp.c_str());
        confres = mysql_store_result(getConnexion());
        row = mysql_fetch_row(confres);
        QString id=QString::fromStdString(string(row[0]));

        QString maReq2="insert into "+getLibMatos(ui->comboBoxNewMatos->currentIndex())+" values ("+id+",'"+ui->lineEditNewSpe->text()+"')";
         string r2=maReq2.toStdString();
           mysql_query(getConnexion(),r2.c_str());
        QString maReq3="insert into local value ("+id+")";
         string r3=maReq3.toStdString();
           mysql_query(getConnexion(),r3.c_str());

    ui->lineEditNewAnnee->clear();
    ui->lineEditNewLib->clear();
    ui->lineEditNewMarque->clear();
    ui->lineEditNewPDJ->clear();
    ui->lineEditNewPh->clear();
    ui->lineEditNewPJ->clear();
    ui->lineEditNewPS->clear();
    ui->lineEditNewSpe->clear();
    ui->lineEditNewTaille->clear();

    VieworNot2(false);

    ui->labelNewProduitajoute->setText("Nouveau produit enregistré");

    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Vous n'avez pas rempli tout les champs.");
        msgBox.exec();
    }
}

void MainWindow::on_pushButtonAjouterCLient_clicked()
{
    NouveauClient BoiteAjoutCLient(this);
    BoiteAjoutCLient.exec();

}


void MainWindow::on_listWidgetResultMatos_clicked(QModelIndex index)
{
    MYSQL_ROW row;
    MYSQL_RES *confres;
    QString maReq="select id,libelle,marque,"+champSpe+" from materiel natural join "+table+" where id="+QString::number(idListMatos.value(ui->listWidgetResultMatos->currentIndex().row()));
    string req=maReq.toStdString();
  mysql_query(getConnexion(),req.c_str());
    confres = mysql_store_result(getConnexion());
    while(( row = mysql_fetch_row(confres)))
     {

        ui->lineEditId->setText(QString::fromStdString(string(row[0])));
        ui->lineEditLib->setText(QString::fromStdString(string(row[1])));
         ui->lineEditMarque->setText(QString::fromStdString(string(row[2])));
     ui->lineEditSpe->setText(QString::fromStdString(string(row[3])));
 }

}


