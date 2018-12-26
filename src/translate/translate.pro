include(../../common.pri)

TARGET = QtAwsTranslate
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    deleteterminologyrequest.h \
    deleteterminologyrequest_p.h \
    deleteterminologyresponse.h \
    deleteterminologyresponse_p.h \
    getterminologyrequest.h \
    getterminologyrequest_p.h \
    getterminologyresponse.h \
    getterminologyresponse_p.h \
    importterminologyrequest.h \
    importterminologyrequest_p.h \
    importterminologyresponse.h \
    importterminologyresponse_p.h \
    listterminologiesrequest.h \
    listterminologiesrequest_p.h \
    listterminologiesresponse.h \
    listterminologiesresponse_p.h \
    translateclient.h \
    translateclient_p.h \
    translaterequest.h \
    translaterequest_p.h \
    translateresponse.h \
    translateresponse_p.h \
    translatetextrequest.h \
    translatetextrequest_p.h \
    translatetextresponse.h \
    translatetextresponse_p.h \

SOURCES += \
    deleteterminologyrequest.cpp \
    deleteterminologyresponse.cpp \
    getterminologyrequest.cpp \
    getterminologyresponse.cpp \
    importterminologyrequest.cpp \
    importterminologyresponse.cpp \
    listterminologiesrequest.cpp \
    listterminologiesresponse.cpp \
    translateclient.cpp \
    translaterequest.cpp \
    translateresponse.cpp \
    translatetextrequest.cpp \
    translatetextresponse.cpp \

win32:CONFIG += skip_target_version_ext
