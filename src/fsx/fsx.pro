include(../../common.pri)

TARGET = QtAwsFSx
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createbackuprequest.h \
    createbackuprequest_p.h \
    createbackupresponse.h \
    createbackupresponse_p.h \
    createfilesystemfrombackuprequest.h \
    createfilesystemfrombackuprequest_p.h \
    createfilesystemfrombackupresponse.h \
    createfilesystemfrombackupresponse_p.h \
    createfilesystemrequest.h \
    createfilesystemrequest_p.h \
    createfilesystemresponse.h \
    createfilesystemresponse_p.h \
    deletebackuprequest.h \
    deletebackuprequest_p.h \
    deletebackupresponse.h \
    deletebackupresponse_p.h \
    deletefilesystemrequest.h \
    deletefilesystemrequest_p.h \
    deletefilesystemresponse.h \
    deletefilesystemresponse_p.h \
    describebackupsrequest.h \
    describebackupsrequest_p.h \
    describebackupsresponse.h \
    describebackupsresponse_p.h \
    describefilesystemsrequest.h \
    describefilesystemsrequest_p.h \
    describefilesystemsresponse.h \
    describefilesystemsresponse_p.h \
    fsxclient.h \
    fsxclient_p.h \
    fsxrequest.h \
    fsxrequest_p.h \
    fsxresponse.h \
    fsxresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatefilesystemrequest.h \
    updatefilesystemrequest_p.h \
    updatefilesystemresponse.h \
    updatefilesystemresponse_p.h \

SOURCES += \
    createbackuprequest.cpp \
    createbackupresponse.cpp \
    createfilesystemfrombackuprequest.cpp \
    createfilesystemfrombackupresponse.cpp \
    createfilesystemrequest.cpp \
    createfilesystemresponse.cpp \
    deletebackuprequest.cpp \
    deletebackupresponse.cpp \
    deletefilesystemrequest.cpp \
    deletefilesystemresponse.cpp \
    describebackupsrequest.cpp \
    describebackupsresponse.cpp \
    describefilesystemsrequest.cpp \
    describefilesystemsresponse.cpp \
    fsxclient.cpp \
    fsxrequest.cpp \
    fsxresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatefilesystemrequest.cpp \
    updatefilesystemresponse.cpp \

win32:CONFIG += skip_target_version_ext
