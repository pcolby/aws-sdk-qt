include(../../common.pri)

TARGET = polly
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    deletelexiconrequest.h \
    deletelexiconrequest_p.h \
    deletelexiconresponse.h \
    deletelexiconresponse_p.h \
    describevoicesrequest.h \
    describevoicesrequest_p.h \
    describevoicesresponse.h \
    describevoicesresponse_p.h \
    getlexiconrequest.h \
    getlexiconrequest_p.h \
    getlexiconresponse.h \
    getlexiconresponse_p.h \
    listlexiconsrequest.h \
    listlexiconsrequest_p.h \
    listlexiconsresponse.h \
    listlexiconsresponse_p.h \
    pollyclient.h \
    pollyclient_p.h \
    pollyclientrequest.h \
    pollyclientrequest_p.h \
    pollyclientresponse.h \
    pollyclientresponse_p.h \
    putlexiconrequest.h \
    putlexiconrequest_p.h \
    putlexiconresponse.h \
    putlexiconresponse_p.h \
    synthesizespeechrequest.h \
    synthesizespeechrequest_p.h \
    synthesizespeechresponse.h \
    synthesizespeechresponse_p.h \

SOURCES += \
    deletelexiconrequest.cpp \
    deletelexiconresponse.cpp \
    describevoicesrequest.cpp \
    describevoicesresponse.cpp \
    getlexiconrequest.cpp \
    getlexiconresponse.cpp \
    listlexiconsrequest.cpp \
    listlexiconsresponse.cpp \
    pollyclient.cpp \
    pollyclientrequest.cpp \
    pollyclientresponse.cpp \
    putlexiconrequest.cpp \
    putlexiconresponse.cpp \
    synthesizespeechrequest.cpp \
    synthesizespeechresponse.cpp \

win32:CONFIG += skip_target_version_ext
