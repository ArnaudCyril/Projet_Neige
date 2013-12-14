#############################################################################
# Makefile for building: TafNeige
# Generated by qmake (2.01a) (Qt 4.6.3) on: ven. oct. 4 14:22:53 2013
# Project:  TafNeige.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile TafNeige.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_SQL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtSql -I/usr/include/qt4 -I/usr/include/mysql -I. -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -lmysqlclient -lQtSql -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
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
		nouveauclient.cpp moc_mainwindow.cpp \
		moc_nouveauclient.cpp
OBJECTS       = main.o \
		mainwindow.o \
		luge.o \
		location.o \
		local.o \
		lesLocations.o \
		chaussuresDeSurf.o \
		chaussuresDeSki.o \
		surf.o \
		paireDeSki.o \
		paireDeChaussure.o \
		paireDeBaton.o \
		matosSortie.o \
		materiel.o \
		nouveauclient.o \
		moc_mainwindow.o \
		moc_nouveauclient.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		TafNeige.pro
QMAKE_TARGET  = TafNeige
DESTDIR       = 
TARGET        = TafNeige

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_nouveauclient.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: TafNeige.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtSql.prl \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile TafNeige.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtSql.prl:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile TafNeige.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/TafNeige1.0.0 || $(MKDIR) .tmp/TafNeige1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/TafNeige1.0.0/ && $(COPY_FILE) --parents mainwindow.h luge.h location.h local.h lesLocations.h chaussuresDeSurf.h chaussuresDeSki.h surf.h paireDeSki.h paireDeChaussure.h paireDeBaton.h matosSortie.h materiel.h nouveauclient.h .tmp/TafNeige1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp luge.cpp location.cpp local.cpp lesLocations.cpp chaussuresDeSurf.cpp chaussuresDeSki.cpp surf.cpp paireDeSki.cpp paireDeChaussure.cpp paireDeBaton.cpp matosSortie.cpp materiel.cpp nouveauclient.cpp .tmp/TafNeige1.0.0/ && $(COPY_FILE) --parents mainwindow.ui nouveauclient.ui .tmp/TafNeige1.0.0/ && (cd `dirname .tmp/TafNeige1.0.0` && $(TAR) TafNeige1.0.0.tar TafNeige1.0.0 && $(COMPRESS) TafNeige1.0.0.tar) && $(MOVE) `dirname .tmp/TafNeige1.0.0`/TafNeige1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/TafNeige1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_nouveauclient.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_nouveauclient.cpp
moc_mainwindow.cpp: mainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_nouveauclient.cpp: nouveauclient.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) nouveauclient.h -o moc_nouveauclient.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_nouveauclient.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_nouveauclient.h
ui_mainwindow.h: mainwindow.ui
	/usr/bin/uic-qt4 mainwindow.ui -o ui_mainwindow.h

ui_nouveauclient.h: nouveauclient.ui
	/usr/bin/uic-qt4 nouveauclient.ui -o ui_nouveauclient.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		surf.h \
		materiel.h \
		chaussuresDeSki.h \
		paireDeChaussure.h \
		chaussuresDeSurf.h \
		paireDeBaton.h \
		location.h \
		matosSortie.h \
		local.h \
		luge.h \
		paireDeSki.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		ui_mainwindow.h \
		local.h \
		materiel.h \
		luge.h \
		paireDeSki.h \
		paireDeBaton.h \
		surf.h \
		location.h \
		nouveauclient.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

luge.o: luge.cpp luge.h \
		materiel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o luge.o luge.cpp

location.o: location.cpp location.h \
		materiel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o location.o location.cpp

local.o: local.cpp local.h \
		materiel.h \
		luge.h \
		paireDeSki.h \
		paireDeBaton.h \
		surf.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o local.o local.cpp

lesLocations.o: lesLocations.cpp lesLocations.h \
		location.h \
		materiel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o lesLocations.o lesLocations.cpp

chaussuresDeSurf.o: chaussuresDeSurf.cpp chaussuresDeSurf.h \
		paireDeChaussure.h \
		materiel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o chaussuresDeSurf.o chaussuresDeSurf.cpp

chaussuresDeSki.o: chaussuresDeSki.cpp chaussuresDeSki.h \
		paireDeChaussure.h \
		materiel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o chaussuresDeSki.o chaussuresDeSki.cpp

surf.o: surf.cpp surf.h \
		materiel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o surf.o surf.cpp

paireDeSki.o: paireDeSki.cpp paireDeSki.h \
		materiel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o paireDeSki.o paireDeSki.cpp

paireDeChaussure.o: paireDeChaussure.cpp paireDeChaussure.h \
		materiel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o paireDeChaussure.o paireDeChaussure.cpp

paireDeBaton.o: paireDeBaton.cpp paireDeBaton.h \
		materiel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o paireDeBaton.o paireDeBaton.cpp

matosSortie.o: matosSortie.cpp matosSortie.h \
		local.h \
		materiel.h \
		luge.h \
		paireDeSki.h \
		paireDeBaton.h \
		surf.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o matosSortie.o matosSortie.cpp

materiel.o: materiel.cpp materiel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o materiel.o materiel.cpp

nouveauclient.o: nouveauclient.cpp nouveauclient.h \
		ui_nouveauclient.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o nouveauclient.o nouveauclient.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_nouveauclient.o: moc_nouveauclient.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_nouveauclient.o moc_nouveauclient.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

