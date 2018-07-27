include(../../common.pri)

TARGET = QtAwsDlm
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createlifecyclepolicyrequest.h \
    createlifecyclepolicyrequest_p.h \
    createlifecyclepolicyresponse.h \
    createlifecyclepolicyresponse_p.h \
    deletelifecyclepolicyrequest.h \
    deletelifecyclepolicyrequest_p.h \
    deletelifecyclepolicyresponse.h \
    deletelifecyclepolicyresponse_p.h \
    dlmclient.h \
    dlmclient_p.h \
    dlmrequest.h \
    dlmrequest_p.h \
    dlmresponse.h \
    dlmresponse_p.h \
    getlifecyclepoliciesrequest.h \
    getlifecyclepoliciesrequest_p.h \
    getlifecyclepoliciesresponse.h \
    getlifecyclepoliciesresponse_p.h \
    getlifecyclepolicyrequest.h \
    getlifecyclepolicyrequest_p.h \
    getlifecyclepolicyresponse.h \
    getlifecyclepolicyresponse_p.h \
    updatelifecyclepolicyrequest.h \
    updatelifecyclepolicyrequest_p.h \
    updatelifecyclepolicyresponse.h \
    updatelifecyclepolicyresponse_p.h \

SOURCES += \
    createlifecyclepolicyrequest.cpp \
    createlifecyclepolicyresponse.cpp \
    deletelifecyclepolicyrequest.cpp \
    deletelifecyclepolicyresponse.cpp \
    dlmclient.cpp \
    dlmrequest.cpp \
    dlmresponse.cpp \
    getlifecyclepoliciesrequest.cpp \
    getlifecyclepoliciesresponse.cpp \
    getlifecyclepolicyrequest.cpp \
    getlifecyclepolicyresponse.cpp \
    updatelifecyclepolicyrequest.cpp \
    updatelifecyclepolicyresponse.cpp \

win32:CONFIG += skip_target_version_ext
