include(../../common.pri)

TARGET = cloudsearchdomain
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cloudsearchdomainclient.h \
    cloudsearchdomainclient_p.h \
    searchrequest.h \
    searchrequest_p.h \
    searchresponse.h \
    searchresponse_p.h \
    suggestrequest.h \
    suggestrequest_p.h \
    suggestresponse.h \
    suggestresponse_p.h \
    uploaddocumentsrequest.h \
    uploaddocumentsrequest_p.h \
    uploaddocumentsresponse.h \
    uploaddocumentsresponse_p.h \

SOURCES += \
    cloudsearchdomainclient.cpp \
    searchrequest.cpp \
    searchresponse.cpp \
    suggestrequest.cpp \
    suggestresponse.cpp \
    uploaddocumentsrequest.cpp \
    uploaddocumentsresponse.cpp \

win32:CONFIG += skip_target_version_ext
