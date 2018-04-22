include(../../common.pri)

TARGET = QtAwsMediaStoreData
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    deleteobjectrequest.h \
    deleteobjectrequest_p.h \
    deleteobjectresponse.h \
    deleteobjectresponse_p.h \
    describeobjectrequest.h \
    describeobjectrequest_p.h \
    describeobjectresponse.h \
    describeobjectresponse_p.h \
    getobjectrequest.h \
    getobjectrequest_p.h \
    getobjectresponse.h \
    getobjectresponse_p.h \
    listitemsrequest.h \
    listitemsrequest_p.h \
    listitemsresponse.h \
    listitemsresponse_p.h \
    mediastoredataclient.h \
    mediastoredataclient_p.h \
    mediastoredatarequest.h \
    mediastoredatarequest_p.h \
    mediastoredataresponse.h \
    mediastoredataresponse_p.h \
    putobjectrequest.h \
    putobjectrequest_p.h \
    putobjectresponse.h \
    putobjectresponse_p.h \

SOURCES += \
    deleteobjectrequest.cpp \
    deleteobjectresponse.cpp \
    describeobjectrequest.cpp \
    describeobjectresponse.cpp \
    getobjectrequest.cpp \
    getobjectresponse.cpp \
    listitemsrequest.cpp \
    listitemsresponse.cpp \
    mediastoredataclient.cpp \
    mediastoredatarequest.cpp \
    mediastoredataresponse.cpp \
    putobjectrequest.cpp \
    putobjectresponse.cpp \

win32:CONFIG += skip_target_version_ext
