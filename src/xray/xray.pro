include(../../common.pri)

TARGET = QtAwsXRay
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
    getencryptionconfigrequest.h \
    getencryptionconfigrequest_p.h \
    getencryptionconfigresponse.h \
    getencryptionconfigresponse_p.h \
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
    putencryptionconfigrequest.h \
    putencryptionconfigrequest_p.h \
    putencryptionconfigresponse.h \
    putencryptionconfigresponse_p.h \
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
    xrayrequest.h \
    xrayrequest_p.h \
    xrayresponse.h \
    xrayresponse_p.h \

SOURCES += \
    batchgettracesrequest.cpp \
    batchgettracesresponse.cpp \
    getencryptionconfigrequest.cpp \
    getencryptionconfigresponse.cpp \
    getservicegraphrequest.cpp \
    getservicegraphresponse.cpp \
    gettracegraphrequest.cpp \
    gettracegraphresponse.cpp \
    gettracesummariesrequest.cpp \
    gettracesummariesresponse.cpp \
    putencryptionconfigrequest.cpp \
    putencryptionconfigresponse.cpp \
    puttelemetryrecordsrequest.cpp \
    puttelemetryrecordsresponse.cpp \
    puttracesegmentsrequest.cpp \
    puttracesegmentsresponse.cpp \
    xrayclient.cpp \
    xrayrequest.cpp \
    xrayresponse.cpp \

win32:CONFIG += skip_target_version_ext
