include(../../common.pri)

TARGET = events
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cloudwatcheventsclient.h \
    cloudwatcheventsclient_p.h \
    deleterulerequest.h \
    deleterulerequest_p.h \
    deleteruleresponse.h \
    deleteruleresponse_p.h \
    describeeventbusrequest.h \
    describeeventbusrequest_p.h \
    describeeventbusresponse.h \
    describeeventbusresponse_p.h \
    describerulerequest.h \
    describerulerequest_p.h \
    describeruleresponse.h \
    describeruleresponse_p.h \
    disablerulerequest.h \
    disablerulerequest_p.h \
    disableruleresponse.h \
    disableruleresponse_p.h \
    enablerulerequest.h \
    enablerulerequest_p.h \
    enableruleresponse.h \
    enableruleresponse_p.h \
    listrulenamesbytargetrequest.h \
    listrulenamesbytargetrequest_p.h \
    listrulenamesbytargetresponse.h \
    listrulenamesbytargetresponse_p.h \
    listrulesrequest.h \
    listrulesrequest_p.h \
    listrulesresponse.h \
    listrulesresponse_p.h \
    listtargetsbyrulerequest.h \
    listtargetsbyrulerequest_p.h \
    listtargetsbyruleresponse.h \
    listtargetsbyruleresponse_p.h \
    puteventsrequest.h \
    puteventsrequest_p.h \
    puteventsresponse.h \
    puteventsresponse_p.h \
    putpermissionrequest.h \
    putpermissionrequest_p.h \
    putpermissionresponse.h \
    putpermissionresponse_p.h \
    putrulerequest.h \
    putrulerequest_p.h \
    putruleresponse.h \
    putruleresponse_p.h \
    puttargetsrequest.h \
    puttargetsrequest_p.h \
    puttargetsresponse.h \
    puttargetsresponse_p.h \
    removepermissionrequest.h \
    removepermissionrequest_p.h \
    removepermissionresponse.h \
    removepermissionresponse_p.h \
    removetargetsrequest.h \
    removetargetsrequest_p.h \
    removetargetsresponse.h \
    removetargetsresponse_p.h \
    testeventpatternrequest.h \
    testeventpatternrequest_p.h \
    testeventpatternresponse.h \
    testeventpatternresponse_p.h \

SOURCES += \
    cloudwatcheventsclient.cpp \
    deleterulerequest.cpp \
    deleteruleresponse.cpp \
    describeeventbusrequest.cpp \
    describeeventbusresponse.cpp \
    describerulerequest.cpp \
    describeruleresponse.cpp \
    disablerulerequest.cpp \
    disableruleresponse.cpp \
    enablerulerequest.cpp \
    enableruleresponse.cpp \
    listrulenamesbytargetrequest.cpp \
    listrulenamesbytargetresponse.cpp \
    listrulesrequest.cpp \
    listrulesresponse.cpp \
    listtargetsbyrulerequest.cpp \
    listtargetsbyruleresponse.cpp \
    puteventsrequest.cpp \
    puteventsresponse.cpp \
    putpermissionrequest.cpp \
    putpermissionresponse.cpp \
    putrulerequest.cpp \
    putruleresponse.cpp \
    puttargetsrequest.cpp \
    puttargetsresponse.cpp \
    removepermissionrequest.cpp \
    removepermissionresponse.cpp \
    removetargetsrequest.cpp \
    removetargetsresponse.cpp \
    testeventpatternrequest.cpp \
    testeventpatternresponse.cpp \

win32:CONFIG += skip_target_version_ext
