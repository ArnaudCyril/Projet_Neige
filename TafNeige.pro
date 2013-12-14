# -------------------------------------------------
# Project created by QtCreator 2013-09-30T16:46:20
# -------------------------------------------------
QT += sql
TARGET = TafNeige
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    luge.cpp \
    location.cpp \
    local.cpp \
    lesLocations.cpp \
    chaussuresDeSurf.cpp \
    chaussuresDeSki.cpp \
    surf.cpp \
    paireDeSki.cpp \
    paireDeChaussure.cpp \
    paireDeBaton.cpp \
    matosSortie.cpp \
    materiel.cpp \
    nouveauclient.cpp
HEADERS += mainwindow.h \
    luge.h \
    location.h \
    local.h \
    lesLocations.h \
    chaussuresDeSurf.h \
    chaussuresDeSki.h \
    surf.h \
    paireDeSki.h \
    paireDeChaussure.h \
    paireDeBaton.h \
    matosSortie.h \
    materiel.h \
    nouveauclient.h
FORMS += mainwindow.ui \
    nouveauclient.ui
INCLUDEPATH += /usr/include/mysql
LIBS += -lmysqlclient
