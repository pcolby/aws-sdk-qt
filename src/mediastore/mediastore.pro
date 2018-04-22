include(../../common.pri)

TARGET = QtAwsMediaStore
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createcontainerrequest.h \
    createcontainerrequest_p.h \
    createcontainerresponse.h \
    createcontainerresponse_p.h \
    deletecontainerpolicyrequest.h \
    deletecontainerpolicyrequest_p.h \
    deletecontainerpolicyresponse.h \
    deletecontainerpolicyresponse_p.h \
    deletecontainerrequest.h \
    deletecontainerrequest_p.h \
    deletecontainerresponse.h \
    deletecontainerresponse_p.h \
    deletecorspolicyrequest.h \
    deletecorspolicyrequest_p.h \
    deletecorspolicyresponse.h \
    deletecorspolicyresponse_p.h \
    describecontainerrequest.h \
    describecontainerrequest_p.h \
    describecontainerresponse.h \
    describecontainerresponse_p.h \
    getcontainerpolicyrequest.h \
    getcontainerpolicyrequest_p.h \
    getcontainerpolicyresponse.h \
    getcontainerpolicyresponse_p.h \
    getcorspolicyrequest.h \
    getcorspolicyrequest_p.h \
    getcorspolicyresponse.h \
    getcorspolicyresponse_p.h \
    listcontainersrequest.h \
    listcontainersrequest_p.h \
    listcontainersresponse.h \
    listcontainersresponse_p.h \
    mediastoreclient.h \
    mediastoreclient_p.h \
    mediastorerequest.h \
    mediastorerequest_p.h \
    mediastoreresponse.h \
    mediastoreresponse_p.h \
    putcontainerpolicyrequest.h \
    putcontainerpolicyrequest_p.h \
    putcontainerpolicyresponse.h \
    putcontainerpolicyresponse_p.h \
    putcorspolicyrequest.h \
    putcorspolicyrequest_p.h \
    putcorspolicyresponse.h \
    putcorspolicyresponse_p.h \

SOURCES += \
    createcontainerrequest.cpp \
    createcontainerresponse.cpp \
    deletecontainerpolicyrequest.cpp \
    deletecontainerpolicyresponse.cpp \
    deletecontainerrequest.cpp \
    deletecontainerresponse.cpp \
    deletecorspolicyrequest.cpp \
    deletecorspolicyresponse.cpp \
    describecontainerrequest.cpp \
    describecontainerresponse.cpp \
    getcontainerpolicyrequest.cpp \
    getcontainerpolicyresponse.cpp \
    getcorspolicyrequest.cpp \
    getcorspolicyresponse.cpp \
    listcontainersrequest.cpp \
    listcontainersresponse.cpp \
    mediastoreclient.cpp \
    mediastorerequest.cpp \
    mediastoreresponse.cpp \
    putcontainerpolicyrequest.cpp \
    putcontainerpolicyresponse.cpp \
    putcorspolicyrequest.cpp \
    putcorspolicyresponse.cpp \

win32:CONFIG += skip_target_version_ext
