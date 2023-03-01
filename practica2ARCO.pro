QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bicicleta.cpp \
    garaje.cpp \
    main.cpp \
    mainwindow.cpp \
    manager.cpp \
    vehiculos.cpp

HEADERS += \
    bicicleta.h \
    garaje.h \
    mainwindow.h \
    manager.h \
    vehiculos.h

FORMS += \
    garaje.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
