#include <QtGui/QApplication>
#include "mainwindow.h"
#include "surf.h"
#include "chaussuresDeSki.h"
#include "chaussuresDeSurf.h"
#include "paireDeBaton.h"
#include "location.h"
#include "matosSortie.h"

#include <mysql.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
