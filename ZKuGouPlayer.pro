


QT       += core gui sql network multimedia ##webkitwidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
CONFIG += c++11


INCLUDEPATH +=$$PWD mainwindow
include(mainwindow/mainwindow.pri)

SOURCES += \
        main.cpp \
        moudle/ZSingleApplication/zsingleapplication.cpp

HEADERS += \
    moudle/ZSingleApplication/zsingleapplication.h

RESOURCES += \
    resource/res.qrc

RC_FILE = resource/main/kwgou.rc
#RC_ICONS = kugou.ico
