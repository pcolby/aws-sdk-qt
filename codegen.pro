# Create a console application.
TEMPLATE = app
QT -= gui

# Disable automatic ASCII conversions.
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

# Enable C++11 and all compiler warnings.
CONFIG += C++11 warn_on

# Treat warnings as errors.
win32-msvc*:QMAKE_CXXFLAGS_WARN_ON += /WX
else:       QMAKE_CXXFLAGS_WARN_ON += -Werror

# Neaten the output directories (also makes them consistent across platforms).
CONFIG(debug,debug|release) DESTDIR = debug
CONFIG(release,debug|release) DESTDIR = release
MOC_DIR = $$DESTDIR/tmp
OBJECTS_DIR = $$DESTDIR/tmp
RCC_DIR = $$DESTDIR/tmp
UI_DIR = $$DESTDIR/tmp

# Include resources and source files.
VPATH += qrc src
HEADERS += generator.h
SOURCES += generator.cpp main.cpp
RESOURCES += api-descriptions.qrc templates.qrc
