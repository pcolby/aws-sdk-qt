HEADERS += \
        testawsabstractcredentials.h \
        testawsabstractsignature.h \
        testawsbasiccredentials.h \
        testawssignaturev2.h \

SOURCES += \
        testawsabstractcredentials.cpp \
        testawsabstractsignature.cpp \
        testawsbasiccredentials.cpp \
        testawssignaturev2.cpp \

VPATH += $$PWD

include(../../src/core/core.pri)
