include(../../common.pri)

TARGET = QtAwsIoT1ClickProjects
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associatedevicewithplacementrequest.h \
    associatedevicewithplacementrequest_p.h \
    associatedevicewithplacementresponse.h \
    associatedevicewithplacementresponse_p.h \
    createplacementrequest.h \
    createplacementrequest_p.h \
    createplacementresponse.h \
    createplacementresponse_p.h \
    createprojectrequest.h \
    createprojectrequest_p.h \
    createprojectresponse.h \
    createprojectresponse_p.h \
    deleteplacementrequest.h \
    deleteplacementrequest_p.h \
    deleteplacementresponse.h \
    deleteplacementresponse_p.h \
    deleteprojectrequest.h \
    deleteprojectrequest_p.h \
    deleteprojectresponse.h \
    deleteprojectresponse_p.h \
    describeplacementrequest.h \
    describeplacementrequest_p.h \
    describeplacementresponse.h \
    describeplacementresponse_p.h \
    describeprojectrequest.h \
    describeprojectrequest_p.h \
    describeprojectresponse.h \
    describeprojectresponse_p.h \
    disassociatedevicefromplacementrequest.h \
    disassociatedevicefromplacementrequest_p.h \
    disassociatedevicefromplacementresponse.h \
    disassociatedevicefromplacementresponse_p.h \
    getdevicesinplacementrequest.h \
    getdevicesinplacementrequest_p.h \
    getdevicesinplacementresponse.h \
    getdevicesinplacementresponse_p.h \
    iot1clickprojectsclient.h \
    iot1clickprojectsclient_p.h \
    iot1clickprojectsrequest.h \
    iot1clickprojectsrequest_p.h \
    iot1clickprojectsresponse.h \
    iot1clickprojectsresponse_p.h \
    listplacementsrequest.h \
    listplacementsrequest_p.h \
    listplacementsresponse.h \
    listplacementsresponse_p.h \
    listprojectsrequest.h \
    listprojectsrequest_p.h \
    listprojectsresponse.h \
    listprojectsresponse_p.h \
    updateplacementrequest.h \
    updateplacementrequest_p.h \
    updateplacementresponse.h \
    updateplacementresponse_p.h \
    updateprojectrequest.h \
    updateprojectrequest_p.h \
    updateprojectresponse.h \
    updateprojectresponse_p.h \

SOURCES += \
    associatedevicewithplacementrequest.cpp \
    associatedevicewithplacementresponse.cpp \
    createplacementrequest.cpp \
    createplacementresponse.cpp \
    createprojectrequest.cpp \
    createprojectresponse.cpp \
    deleteplacementrequest.cpp \
    deleteplacementresponse.cpp \
    deleteprojectrequest.cpp \
    deleteprojectresponse.cpp \
    describeplacementrequest.cpp \
    describeplacementresponse.cpp \
    describeprojectrequest.cpp \
    describeprojectresponse.cpp \
    disassociatedevicefromplacementrequest.cpp \
    disassociatedevicefromplacementresponse.cpp \
    getdevicesinplacementrequest.cpp \
    getdevicesinplacementresponse.cpp \
    iot1clickprojectsclient.cpp \
    iot1clickprojectsrequest.cpp \
    iot1clickprojectsresponse.cpp \
    listplacementsrequest.cpp \
    listplacementsresponse.cpp \
    listprojectsrequest.cpp \
    listprojectsresponse.cpp \
    updateplacementrequest.cpp \
    updateplacementresponse.cpp \
    updateprojectrequest.cpp \
    updateprojectresponse.cpp \

win32:CONFIG += skip_target_version_ext
