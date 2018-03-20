include(../../common.pri)

TARGET = cognito-identity
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cognitoidentityclient.h \
    cognitoidentityclient_p.h \

SOURCES += \
    cognitoidentityclient.cpp \

win32:CONFIG += skip_target_version_ext
