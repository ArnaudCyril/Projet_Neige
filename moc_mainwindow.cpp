/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Oct 4 17:23:19 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x08,
      64,   11,   11,   11, 0x08,
     101,   11,   11,   11, 0x08,
     140,   12,   11,   11, 0x08,
     175,   11,   11,   11, 0x08,
     208,   11,   11,   11, 0x08,
     241,  239,   11,   11, 0x08,
     290,  239,   11,   11, 0x08,
     336,  239,   11,   11, 0x08,
     382,  239,   11,   11, 0x08,
     427,   11,   11,   11, 0x08,
     466,   11,   11,   11, 0x08,
     493,   11,   11,   11, 0x08,
     522,   11,   11,   11, 0x08,
     551,   11,   11,   11, 0x08,
     578,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0index\0"
    "on_listWidgetResultMatos_clicked(QModelIndex)\0"
    "on_pushButtonAjouterCLient_clicked()\0"
    "on_pushButtonajouterNewMatos_clicked()\0"
    "on_comboBoxNewMatos_activated(int)\0"
    "on_pushButtonSupprimer_clicked()\0"
    "on_pushButtonAjouter_clicked()\0,\0"
    "on_lineEditMarque_cursorPositionChanged(int,int)\0"
    "on_lineEditLib_cursorPositionChanged(int,int)\0"
    "on_lineEditSpe_cursorPositionChanged(int,int)\0"
    "on_lineEditId_cursorPositionChanged(int,int)\0"
    "on_pushButtonValiderlocation_clicked()\0"
    "on_checkBoxHeure_clicked()\0"
    "on_checkBoxSemaine_clicked()\0"
    "on_checkBoxJournee_clicked()\0"
    "on_checkBoxDemiJ_clicked()\0"
    "on_comboBoxMatosLoca_activated(int)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_listWidgetResultMatos_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: on_pushButtonAjouterCLient_clicked(); break;
        case 2: on_pushButtonajouterNewMatos_clicked(); break;
        case 3: on_comboBoxNewMatos_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: on_pushButtonSupprimer_clicked(); break;
        case 5: on_pushButtonAjouter_clicked(); break;
        case 6: on_lineEditMarque_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: on_lineEditLib_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: on_lineEditSpe_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: on_lineEditId_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: on_pushButtonValiderlocation_clicked(); break;
        case 11: on_checkBoxHeure_clicked(); break;
        case 12: on_checkBoxSemaine_clicked(); break;
        case 13: on_checkBoxJournee_clicked(); break;
        case 14: on_checkBoxDemiJ_clicked(); break;
        case 15: on_comboBoxMatosLoca_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
