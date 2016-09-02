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
