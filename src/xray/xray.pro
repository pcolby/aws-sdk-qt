include(../../common.pri)

TARGET = xray
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchgettracesrequest.h \
    batchgettracesrequest_p.h \
    batchgettracesresponse.h \
    batchgettracesresponse_p.h \
    getservicegraphrequest.h \
    getservicegraphrequest_p.h \
    getservicegraphresponse.h \
    getservicegraphresponse_p.h \
    gettracegraphrequest.h \
    gettracegraphrequest_p.h \
    gettracegraphresponse.h \
    gettracegraphresponse_p.h \
    gettracesummariesrequest.h \
    gettracesummariesrequest_p.h \
    gettracesummariesresponse.h \
    gettracesummariesresponse_p.h \
    puttelemetryrecordsrequest.h \
    puttelemetryrecordsrequest_p.h \
    puttelemetryrecordsresponse.h \
    puttelemetryrecordsresponse_p.h \
    puttracesegmentsrequest.h \
    puttracesegmentsrequest_p.h \
    puttracesegmentsresponse.h \
    puttracesegmentsresponse_p.h \
    xrayclient.h \
    xrayclient_p.h \
    xrayclientrequest.h \
    xrayclientrequest_p.h \
    xrayclientresponse.h \
    xrayclientresponse_p.h \

SOURCES += \
    batchgettracesrequest.cpp \
    batchgettracesresponse.cpp \
    getservicegraphrequest.cpp \
    getservicegraphresponse.cpp \
    gettracegraphrequest.cpp \
    gettracegraphresponse.cpp \
    gettracesummariesrequest.cpp \
    gettracesummariesresponse.cpp \
    puttelemetryrecordsrequest.cpp \
    puttelemetryrecordsresponse.cpp \
    puttracesegmentsrequest.cpp \
    puttracesegmentsresponse.cpp \
    xrayclient.cpp \
    xrayclientrequest.cpp \
    xrayclientresponse.cpp \

win32:CONFIG += skip_target_version_ext
