include(../../common.pri)

TARGET = QtAwssigner
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cancelsigningprofilerequest.h \
    cancelsigningprofilerequest_p.h \
    cancelsigningprofileresponse.h \
    cancelsigningprofileresponse_p.h \
    describesigningjobrequest.h \
    describesigningjobrequest_p.h \
    describesigningjobresponse.h \
    describesigningjobresponse_p.h \
    getsigningplatformrequest.h \
    getsigningplatformrequest_p.h \
    getsigningplatformresponse.h \
    getsigningplatformresponse_p.h \
    getsigningprofilerequest.h \
    getsigningprofilerequest_p.h \
    getsigningprofileresponse.h \
    getsigningprofileresponse_p.h \
    listsigningjobsrequest.h \
    listsigningjobsrequest_p.h \
    listsigningjobsresponse.h \
    listsigningjobsresponse_p.h \
    listsigningplatformsrequest.h \
    listsigningplatformsrequest_p.h \
    listsigningplatformsresponse.h \
    listsigningplatformsresponse_p.h \
    listsigningprofilesrequest.h \
    listsigningprofilesrequest_p.h \
    listsigningprofilesresponse.h \
    listsigningprofilesresponse_p.h \
    putsigningprofilerequest.h \
    putsigningprofilerequest_p.h \
    putsigningprofileresponse.h \
    putsigningprofileresponse_p.h \
    signerclient.h \
    signerclient_p.h \
    signerrequest.h \
    signerrequest_p.h \
    signerresponse.h \
    signerresponse_p.h \
    startsigningjobrequest.h \
    startsigningjobrequest_p.h \
    startsigningjobresponse.h \
    startsigningjobresponse_p.h \

SOURCES += \
    cancelsigningprofilerequest.cpp \
    cancelsigningprofileresponse.cpp \
    describesigningjobrequest.cpp \
    describesigningjobresponse.cpp \
    getsigningplatformrequest.cpp \
    getsigningplatformresponse.cpp \
    getsigningprofilerequest.cpp \
    getsigningprofileresponse.cpp \
    listsigningjobsrequest.cpp \
    listsigningjobsresponse.cpp \
    listsigningplatformsrequest.cpp \
    listsigningplatformsresponse.cpp \
    listsigningprofilesrequest.cpp \
    listsigningprofilesresponse.cpp \
    putsigningprofilerequest.cpp \
    putsigningprofileresponse.cpp \
    signerclient.cpp \
    signerrequest.cpp \
    signerresponse.cpp \
    startsigningjobrequest.cpp \
    startsigningjobresponse.cpp \

win32:CONFIG += skip_target_version_ext
