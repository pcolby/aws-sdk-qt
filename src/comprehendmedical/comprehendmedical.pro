include(../../common.pri)

TARGET = QtAwsComprehendMedical
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    comprehendmedicalclient.h \
    comprehendmedicalclient_p.h \
    comprehendmedicalrequest.h \
    comprehendmedicalrequest_p.h \
    comprehendmedicalresponse.h \
    comprehendmedicalresponse_p.h \
    detectentitiesrequest.h \
    detectentitiesrequest_p.h \
    detectentitiesresponse.h \
    detectentitiesresponse_p.h \
    detectphirequest.h \
    detectphirequest_p.h \
    detectphiresponse.h \
    detectphiresponse_p.h \

SOURCES += \
    comprehendmedicalclient.cpp \
    comprehendmedicalrequest.cpp \
    comprehendmedicalresponse.cpp \
    detectentitiesrequest.cpp \
    detectentitiesresponse.cpp \
    detectphirequest.cpp \
    detectphiresponse.cpp \

win32:CONFIG += skip_target_version_ext
