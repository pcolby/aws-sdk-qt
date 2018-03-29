include(../../common.pri)

TARGET = mobileanalytics
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    mobileanalyticsclient.h \
    mobileanalyticsclient_p.h \
    mobileanalyticsrequest.h \
    mobileanalyticsrequest_p.h \
    mobileanalyticsresponse.h \
    mobileanalyticsresponse_p.h \
    puteventsrequest.h \
    puteventsrequest_p.h \
    puteventsresponse.h \
    puteventsresponse_p.h \

SOURCES += \
    mobileanalyticsclient.cpp \
    mobileanalyticsrequest.cpp \
    mobileanalyticsresponse.cpp \
    puteventsrequest.cpp \
    puteventsresponse.cpp \

win32:CONFIG += skip_target_version_ext
