#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <mysql.h>
#include <string.h>
#include <QModelIndex>
#include <QVector>
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
     QString isChecked();
     MYSQL * getConnexion(){return con;};
       QString getLibMatos(int);
       void remplirListMatosLoca(QString,QString);
    void VieworNot(bool);
    void VieworNot2(bool);
    void quandOnSuppr();
    int getPrix(int);
     void calculPrix();
     void getClient();
     QString returnSpe(QString);
     QString getDuree();
     void getPiece();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    void Connection();
    MYSQL * con;
    QString table;
    QVector <QString> listMatos;
    QVector <int> idListMatosAConfirmer;
    QVector <int> idListMatos;
    QVector <int> idClient;
    QString champSpe;
    int prix;

private slots:





    void on_listWidgetResultMatos_clicked(QModelIndex index);
    void on_pushButtonAjouterCLient_clicked();
    void on_pushButtonajouterNewMatos_clicked();
    void on_comboBoxNewMatos_activated(int index);
    void on_pushButtonSupprimer_clicked();
    void on_pushButtonAjouter_clicked();
    void on_lineEditMarque_cursorPositionChanged(int , int );
    void on_lineEditLib_cursorPositionChanged(int , int );
    void on_lineEditSpe_cursorPositionChanged(int , int );
    void on_lineEditId_cursorPositionChanged(int , int );
    void on_pushButtonValiderlocation_clicked();
    void on_checkBoxHeure_clicked();
    void on_checkBoxSemaine_clicked();
    void on_checkBoxJournee_clicked();
    void on_checkBoxDemiJ_clicked();


    void on_comboBoxMatosLoca_activated(int);
};

#endif // MAINWINDOW_H
