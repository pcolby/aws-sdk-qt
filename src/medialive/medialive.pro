include(../../common.pri)

TARGET = medialive
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createchannelrequest.h \
    createchannelrequest_p.h \
    createchannelresponse.h \
    createchannelresponse_p.h \
    createinputrequest.h \
    createinputrequest_p.h \
    createinputresponse.h \
    createinputresponse_p.h \
    createinputsecuritygrouprequest.h \
    createinputsecuritygrouprequest_p.h \
    createinputsecuritygroupresponse.h \
    createinputsecuritygroupresponse_p.h \
    deletechannelrequest.h \
    deletechannelrequest_p.h \
    deletechannelresponse.h \
    deletechannelresponse_p.h \
    deleteinputrequest.h \
    deleteinputrequest_p.h \
    deleteinputresponse.h \
    deleteinputresponse_p.h \
    deleteinputsecuritygrouprequest.h \
    deleteinputsecuritygrouprequest_p.h \
    deleteinputsecuritygroupresponse.h \
    deleteinputsecuritygroupresponse_p.h \
    describechannelrequest.h \
    describechannelrequest_p.h \
    describechannelresponse.h \
    describechannelresponse_p.h \
    describeinputrequest.h \
    describeinputrequest_p.h \
    describeinputresponse.h \
    describeinputresponse_p.h \
    describeinputsecuritygrouprequest.h \
    describeinputsecuritygrouprequest_p.h \
    describeinputsecuritygroupresponse.h \
    describeinputsecuritygroupresponse_p.h \
    listchannelsrequest.h \
    listchannelsrequest_p.h \
    listchannelsresponse.h \
    listchannelsresponse_p.h \
    listinputsecuritygroupsrequest.h \
    listinputsecuritygroupsrequest_p.h \
    listinputsecuritygroupsresponse.h \
    listinputsecuritygroupsresponse_p.h \
    listinputsrequest.h \
    listinputsrequest_p.h \
    listinputsresponse.h \
    listinputsresponse_p.h \
    medialiveclient.h \
    medialiveclient_p.h \
    medialiveclientrequest.h \
    medialiveclientrequest_p.h \
    medialiveclientresponse.h \
    medialiveclientresponse_p.h \
    startchannelrequest.h \
    startchannelrequest_p.h \
    startchannelresponse.h \
    startchannelresponse_p.h \
    stopchannelrequest.h \
    stopchannelrequest_p.h \
    stopchannelresponse.h \
    stopchannelresponse_p.h \
    updatechannelrequest.h \
    updatechannelrequest_p.h \
    updatechannelresponse.h \
    updatechannelresponse_p.h \
    updateinputrequest.h \
    updateinputrequest_p.h \
    updateinputresponse.h \
    updateinputresponse_p.h \
    updateinputsecuritygrouprequest.h \
    updateinputsecuritygrouprequest_p.h \
    updateinputsecuritygroupresponse.h \
    updateinputsecuritygroupresponse_p.h \

SOURCES += \
    createchannelrequest.cpp \
    createchannelresponse.cpp \
    createinputrequest.cpp \
    createinputresponse.cpp \
    createinputsecuritygrouprequest.cpp \
    createinputsecuritygroupresponse.cpp \
    deletechannelrequest.cpp \
    deletechannelresponse.cpp \
    deleteinputrequest.cpp \
    deleteinputresponse.cpp \
    deleteinputsecuritygrouprequest.cpp \
    deleteinputsecuritygroupresponse.cpp \
    describechannelrequest.cpp \
    describechannelresponse.cpp \
    describeinputrequest.cpp \
    describeinputresponse.cpp \
    describeinputsecuritygrouprequest.cpp \
    describeinputsecuritygroupresponse.cpp \
    listchannelsrequest.cpp \
    listchannelsresponse.cpp \
    listinputsecuritygroupsrequest.cpp \
    listinputsecuritygroupsresponse.cpp \
    listinputsrequest.cpp \
    listinputsresponse.cpp \
    medialiveclient.cpp \
    medialiveclientrequest.cpp \
    medialiveclientresponse.cpp \
    startchannelrequest.cpp \
    startchannelresponse.cpp \
    stopchannelrequest.cpp \
    stopchannelresponse.cpp \
    updatechannelrequest.cpp \
    updatechannelresponse.cpp \
    updateinputrequest.cpp \
    updateinputresponse.cpp \
    updateinputsecuritygrouprequest.cpp \
    updateinputsecuritygroupresponse.cpp \

win32:CONFIG += skip_target_version_ext
