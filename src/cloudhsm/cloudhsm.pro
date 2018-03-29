include(../../common.pri)

TARGET = cloudhsm
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addtagstoresourcerequest.h \
    addtagstoresourcerequest_p.h \
    addtagstoresourceresponse.h \
    addtagstoresourceresponse_p.h \
    cloudhsmclient.h \
    cloudhsmclient_p.h \
    cloudhsmrequest.h \
    cloudhsmrequest_p.h \
    cloudhsmresponse.h \
    cloudhsmresponse_p.h \
    createhapgrequest.h \
    createhapgrequest_p.h \
    createhapgresponse.h \
    createhapgresponse_p.h \
    createhsmrequest.h \
    createhsmrequest_p.h \
    createhsmresponse.h \
    createhsmresponse_p.h \
    createlunaclientrequest.h \
    createlunaclientrequest_p.h \
    createlunaclientresponse.h \
    createlunaclientresponse_p.h \
    deletehapgrequest.h \
    deletehapgrequest_p.h \
    deletehapgresponse.h \
    deletehapgresponse_p.h \
    deletehsmrequest.h \
    deletehsmrequest_p.h \
    deletehsmresponse.h \
    deletehsmresponse_p.h \
    deletelunaclientrequest.h \
    deletelunaclientrequest_p.h \
    deletelunaclientresponse.h \
    deletelunaclientresponse_p.h \
    describehapgrequest.h \
    describehapgrequest_p.h \
    describehapgresponse.h \
    describehapgresponse_p.h \
    describehsmrequest.h \
    describehsmrequest_p.h \
    describehsmresponse.h \
    describehsmresponse_p.h \
    describelunaclientrequest.h \
    describelunaclientrequest_p.h \
    describelunaclientresponse.h \
    describelunaclientresponse_p.h \
    getconfigrequest.h \
    getconfigrequest_p.h \
    getconfigresponse.h \
    getconfigresponse_p.h \
    listavailablezonesrequest.h \
    listavailablezonesrequest_p.h \
    listavailablezonesresponse.h \
    listavailablezonesresponse_p.h \
    listhapgsrequest.h \
    listhapgsrequest_p.h \
    listhapgsresponse.h \
    listhapgsresponse_p.h \
    listhsmsrequest.h \
    listhsmsrequest_p.h \
    listhsmsresponse.h \
    listhsmsresponse_p.h \
    listlunaclientsrequest.h \
    listlunaclientsrequest_p.h \
    listlunaclientsresponse.h \
    listlunaclientsresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    modifyhapgrequest.h \
    modifyhapgrequest_p.h \
    modifyhapgresponse.h \
    modifyhapgresponse_p.h \
    modifyhsmrequest.h \
    modifyhsmrequest_p.h \
    modifyhsmresponse.h \
    modifyhsmresponse_p.h \
    modifylunaclientrequest.h \
    modifylunaclientrequest_p.h \
    modifylunaclientresponse.h \
    modifylunaclientresponse_p.h \
    removetagsfromresourcerequest.h \
    removetagsfromresourcerequest_p.h \
    removetagsfromresourceresponse.h \
    removetagsfromresourceresponse_p.h \

SOURCES += \
    addtagstoresourcerequest.cpp \
    addtagstoresourceresponse.cpp \
    cloudhsmclient.cpp \
    cloudhsmrequest.cpp \
    cloudhsmresponse.cpp \
    createhapgrequest.cpp \
    createhapgresponse.cpp \
    createhsmrequest.cpp \
    createhsmresponse.cpp \
    createlunaclientrequest.cpp \
    createlunaclientresponse.cpp \
    deletehapgrequest.cpp \
    deletehapgresponse.cpp \
    deletehsmrequest.cpp \
    deletehsmresponse.cpp \
    deletelunaclientrequest.cpp \
    deletelunaclientresponse.cpp \
    describehapgrequest.cpp \
    describehapgresponse.cpp \
    describehsmrequest.cpp \
    describehsmresponse.cpp \
    describelunaclientrequest.cpp \
    describelunaclientresponse.cpp \
    getconfigrequest.cpp \
    getconfigresponse.cpp \
    listavailablezonesrequest.cpp \
    listavailablezonesresponse.cpp \
    listhapgsrequest.cpp \
    listhapgsresponse.cpp \
    listhsmsrequest.cpp \
    listhsmsresponse.cpp \
    listlunaclientsrequest.cpp \
    listlunaclientsresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    modifyhapgrequest.cpp \
    modifyhapgresponse.cpp \
    modifyhsmrequest.cpp \
    modifyhsmresponse.cpp \
    modifylunaclientrequest.cpp \
    modifylunaclientresponse.cpp \
    removetagsfromresourcerequest.cpp \
    removetagsfromresourceresponse.cpp \

win32:CONFIG += skip_target_version_ext
