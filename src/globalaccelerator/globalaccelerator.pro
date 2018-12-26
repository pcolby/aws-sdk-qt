include(../../common.pri)

TARGET = QtAwsGlobalAccelerator
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createacceleratorrequest.h \
    createacceleratorrequest_p.h \
    createacceleratorresponse.h \
    createacceleratorresponse_p.h \
    createendpointgrouprequest.h \
    createendpointgrouprequest_p.h \
    createendpointgroupresponse.h \
    createendpointgroupresponse_p.h \
    createlistenerrequest.h \
    createlistenerrequest_p.h \
    createlistenerresponse.h \
    createlistenerresponse_p.h \
    deleteacceleratorrequest.h \
    deleteacceleratorrequest_p.h \
    deleteacceleratorresponse.h \
    deleteacceleratorresponse_p.h \
    deleteendpointgrouprequest.h \
    deleteendpointgrouprequest_p.h \
    deleteendpointgroupresponse.h \
    deleteendpointgroupresponse_p.h \
    deletelistenerrequest.h \
    deletelistenerrequest_p.h \
    deletelistenerresponse.h \
    deletelistenerresponse_p.h \
    describeacceleratorattributesrequest.h \
    describeacceleratorattributesrequest_p.h \
    describeacceleratorattributesresponse.h \
    describeacceleratorattributesresponse_p.h \
    describeacceleratorrequest.h \
    describeacceleratorrequest_p.h \
    describeacceleratorresponse.h \
    describeacceleratorresponse_p.h \
    describeendpointgrouprequest.h \
    describeendpointgrouprequest_p.h \
    describeendpointgroupresponse.h \
    describeendpointgroupresponse_p.h \
    describelistenerrequest.h \
    describelistenerrequest_p.h \
    describelistenerresponse.h \
    describelistenerresponse_p.h \
    globalacceleratorclient.h \
    globalacceleratorclient_p.h \
    globalacceleratorrequest.h \
    globalacceleratorrequest_p.h \
    globalacceleratorresponse.h \
    globalacceleratorresponse_p.h \
    listacceleratorsrequest.h \
    listacceleratorsrequest_p.h \
    listacceleratorsresponse.h \
    listacceleratorsresponse_p.h \
    listendpointgroupsrequest.h \
    listendpointgroupsrequest_p.h \
    listendpointgroupsresponse.h \
    listendpointgroupsresponse_p.h \
    listlistenersrequest.h \
    listlistenersrequest_p.h \
    listlistenersresponse.h \
    listlistenersresponse_p.h \
    updateacceleratorattributesrequest.h \
    updateacceleratorattributesrequest_p.h \
    updateacceleratorattributesresponse.h \
    updateacceleratorattributesresponse_p.h \
    updateacceleratorrequest.h \
    updateacceleratorrequest_p.h \
    updateacceleratorresponse.h \
    updateacceleratorresponse_p.h \
    updateendpointgrouprequest.h \
    updateendpointgrouprequest_p.h \
    updateendpointgroupresponse.h \
    updateendpointgroupresponse_p.h \
    updatelistenerrequest.h \
    updatelistenerrequest_p.h \
    updatelistenerresponse.h \
    updatelistenerresponse_p.h \

SOURCES += \
    createacceleratorrequest.cpp \
    createacceleratorresponse.cpp \
    createendpointgrouprequest.cpp \
    createendpointgroupresponse.cpp \
    createlistenerrequest.cpp \
    createlistenerresponse.cpp \
    deleteacceleratorrequest.cpp \
    deleteacceleratorresponse.cpp \
    deleteendpointgrouprequest.cpp \
    deleteendpointgroupresponse.cpp \
    deletelistenerrequest.cpp \
    deletelistenerresponse.cpp \
    describeacceleratorattributesrequest.cpp \
    describeacceleratorattributesresponse.cpp \
    describeacceleratorrequest.cpp \
    describeacceleratorresponse.cpp \
    describeendpointgrouprequest.cpp \
    describeendpointgroupresponse.cpp \
    describelistenerrequest.cpp \
    describelistenerresponse.cpp \
    globalacceleratorclient.cpp \
    globalacceleratorrequest.cpp \
    globalacceleratorresponse.cpp \
    listacceleratorsrequest.cpp \
    listacceleratorsresponse.cpp \
    listendpointgroupsrequest.cpp \
    listendpointgroupsresponse.cpp \
    listlistenersrequest.cpp \
    listlistenersresponse.cpp \
    updateacceleratorattributesrequest.cpp \
    updateacceleratorattributesresponse.cpp \
    updateacceleratorrequest.cpp \
    updateacceleratorresponse.cpp \
    updateendpointgrouprequest.cpp \
    updateendpointgroupresponse.cpp \
    updatelistenerrequest.cpp \
    updatelistenerresponse.cpp \

win32:CONFIG += skip_target_version_ext
