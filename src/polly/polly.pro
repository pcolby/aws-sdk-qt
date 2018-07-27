include(../../common.pri)

TARGET = QtAwsPolly
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
    getspeechsynthesistaskrequest.h \
    getspeechsynthesistaskrequest_p.h \
    getspeechsynthesistaskresponse.h \
    getspeechsynthesistaskresponse_p.h \
    listlexiconsrequest.h \
    listlexiconsrequest_p.h \
    listlexiconsresponse.h \
    listlexiconsresponse_p.h \
    listspeechsynthesistasksrequest.h \
    listspeechsynthesistasksrequest_p.h \
    listspeechsynthesistasksresponse.h \
    listspeechsynthesistasksresponse_p.h \
    pollyclient.h \
    pollyclient_p.h \
    pollyrequest.h \
    pollyrequest_p.h \
    pollyresponse.h \
    pollyresponse_p.h \
    putlexiconrequest.h \
    putlexiconrequest_p.h \
    putlexiconresponse.h \
    putlexiconresponse_p.h \
    startspeechsynthesistaskrequest.h \
    startspeechsynthesistaskrequest_p.h \
    startspeechsynthesistaskresponse.h \
    startspeechsynthesistaskresponse_p.h \
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
    getspeechsynthesistaskrequest.cpp \
    getspeechsynthesistaskresponse.cpp \
    listlexiconsrequest.cpp \
    listlexiconsresponse.cpp \
    listspeechsynthesistasksrequest.cpp \
    listspeechsynthesistasksresponse.cpp \
    pollyclient.cpp \
    pollyrequest.cpp \
    pollyresponse.cpp \
    putlexiconrequest.cpp \
    putlexiconresponse.cpp \
    startspeechsynthesistaskrequest.cpp \
    startspeechsynthesistaskresponse.cpp \
    synthesizespeechrequest.cpp \
    synthesizespeechresponse.cpp \

win32:CONFIG += skip_target_version_ext
