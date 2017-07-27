VERSION = 0.3.0
RELEASE_PHASE = pre-alpha
TOPDIR = $$PWD

# Setup build number, where available.
if (isEmpty(VER_BUILD)): VER_BUILD = $$(APPVEYOR_BUILD_NUMBER)
if (isEmpty(VER_BUILD)): VER_BUILD = 0
if (isEmpty(VER_PAT)) {
    # Qmake only automatically assigns VER_PAT on some platforms.
    VER_PARTS = $$split(VERSION, .)
    VER_PAT = $$member(VER_PARTS, 2)
}
win32:VERSION = $$VERSION"."$$VER_BUILD

# Validate the release phase (just to suite our own project preferences).
!contains(RELEASE_PHASE, ^(pre-alpha|alpha|beta|release)) {
    error("RELEASE_PHASE must be one of: pre-alpha, alpha, beta or release")
}

# Enable all warnings for all targets.
CONFIG += warn_on

# Treat warnings as errors.
win32-msvc*:QMAKE_CXXFLAGS_WARN_ON += /WX
else:       QMAKE_CXXFLAGS_WARN_ON += -Werror

# Workaround a couple of known bugs with C++11 support for Qt with gcc on OSX.
macx-g++:contains(CONFIG, c++11) {
    equals(QT_MAJOR_VERSION,5):equals(QT_MINOR_VERSION,2) {
        # https://bugreports.qt.io/browse/QTBUG-28097
        message(Setting OSX deployment target to 10.7 for for C++11 with $$QMAKE_CXX and $$QT_VERSION)
        QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.7
        message(Adding '-stdlib=libc++' flag for C++11 with $$QMAKE_CXX and $$QT_VERSION)
        QMAKE_CXXFLAGS += -stdlib=libc++
    }
    # This is necessary for at least Qt 5.5 and 5.7 on OSX (with GCC). But not Qt 5.9.
    equals(QT_MAJOR_VERSION,5):greaterThan(QT_MINOR_VERSION,4):lessThan(QT_MINOR_VERSION,8) {
        message(Adding '-stdlib=libc++' flag for C++11 with $$QMAKE_CXX and $$QT_VERSION)
        QMAKE_CXXFLAGS += -stdlib=libc++
        QMAKE_LFLAGS += -stdlib=libc++
    }
}

# Workaround LLVM bug https://llvm.org/bugs/show_bug.cgi?id=26396 https://bugreports.qt.io/browse/QTBUG-52134
macx:equals(QT_MAJOR_VERSION,5):equals(QT_MINOR_VERSION,5) {
    message(Adding '-Wno-return-stack-address' flag $$QT_VERSION)
    QMAKE_CXXFLAGS += -Wno-return-stack-address
}
