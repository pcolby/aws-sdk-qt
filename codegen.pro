# Create a console application.
TEMPLATE = app
QT -= gui

# Enable C++11 and all compiler warnings.
CONFIG += C++11 warn_on

# Treat warnings as errors.
win32-msvc*:QMAKE_CXXFLAGS_WARN_ON += /WX
else:       QMAKE_CXXFLAGS_WARN_ON += -Werror

# Include resources and source files.
VPATH += qrc src
HEADERS += generator.h
SOURCES += generator.cpp main.cpp
RESOURCES += api-descriptions.qrc templates.qrc
