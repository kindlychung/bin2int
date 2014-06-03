TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CC = clang
QMAKE_CXX = clang++
QMAKE_CXXFLAGS += -std=c++11
QMAKE_CXXFLAGS += -D_FILE_OFFSET_BITS=64
INCLUDEPATH += /usr/include/c++/4.8
INCLUDEPATH += /usr/include/boost
LIBS += -lboost_system
LIBS += -lboost_filesystem

SOURCES += main.cpp

