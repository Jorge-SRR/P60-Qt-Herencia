TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cuerda.cpp \
        instrumentos.cpp \
        main.cpp \
        percucion.cpp \
        viento.cpp

HEADERS += \
    cuerda.h \
    instrumentos.h \
    percucion.h \
    viento.h
