#ifndef NOUVEAUCLIENT_H
#define NOUVEAUCLIENT_H

#include <QDialog>
#include "mainwindow.h"
#include <string.h>
namespace Ui {
    class NouveauClient;
}

class NouveauClient : public QDialog {
    Q_OBJECT
public:
    NouveauClient(QWidget *parent = 0);
    ~NouveauClient();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::NouveauClient *ui;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // NOUVEAUCLIENT_H
