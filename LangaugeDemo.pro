#-------------------------------------------------
#
# Project created by QtCreator 2020-03-07T08:45:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LangaugeDemo
TEMPLATE = app


SOURCES += main.cpp\
        mianwindow.cpp \
    showtest.cpp

HEADERS  += mianwindow.h \
    showtest.h

FORMS    += mianwindow.ui \
    showtest.ui

RESOURCES += \
    qrc.qrc

TRANSLATIONS = LanguageDemo_zh.ts\
                                LanguageDemo_en.ts
