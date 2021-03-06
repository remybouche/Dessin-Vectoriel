QT += core
QT -= gui

CONFIG += c++11

TARGET = Dessin
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += sources/main.cpp \
    sources/Format/CBitmap.cpp \
    sources/Image/CImage.cpp \
    sources/Image/CLigne.cpp \
    sources/Image/CPixel.cpp \
    sources/Image/line.cpp \
    sources/Image/rectangle.cpp \
    sources/Image/shape.cpp \
    sources/Image/circle.cpp

HEADERS += \
    sources/Format/CBitmap.h \
    sources/Image/CImage.h \
    sources/Image/CLigne.h \
    sources/Image/CPixel.h \
    sources/Image/line.h \
    sources/Image/rectangle.h \
    sources/Image/shape.h \
    sources/Image/circle.h



