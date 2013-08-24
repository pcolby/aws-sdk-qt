HEADERS += \
        testawsabstractcredentials.h \
        testawsabstractsignature.h \
        testawsbasiccredentials.h \
        testawssignaturev2.h \
        testawssignaturev4.h \

SOURCES += \
        testawsabstractcredentials.cpp \
        testawsabstractsignature.cpp \
        testawsbasiccredentials.cpp \
        testawssignaturev2.cpp \
        testawssignaturev4.cpp \

VPATH += $$PWD

include(../../src/core/core.pri)
