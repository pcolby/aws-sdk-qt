TEMPLATE = app
QT += testlib
QT -= gui
CONFIG += testcase
SOURCES += test.cpp

# Neaten the output directories.
MOC_DIR = build
OBJECTS_DIR = build

# Code coverage reporting (for Linux at least).
unix {
    # Enable gcov compile and link flags.
    QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
    QMAKE_LFLAGS += -fprofile-arcs -ftest-coverage

    # Generate gcov's gcda files by executing the test program.
    gcov.depends = test
    gcov.target = build/test.gcda
    gcov.commands = ./test

    # Generate an lcov tracefile from gcov's gcda files.
    lcov.depends = build/test.gcda
    lcov.target = build/coverage.info
    lcov.commands = lcov --capture --base-directory ../src --directory build --output build/coverage.info ; \
                    lcov --remove build/coverage.info '"/usr/include/*/*"' '"src/build/*"' src/test.cpp --output build/coverage.info

    # Generate HTML coverage reports from lcov's tracefile.
    coverage.depends = build/coverage.info
    coverage.commands += genhtml --output-directory coverage_html build/coverage.info

    QMAKE_EXTRA_TARGETS += coverage gcov lcov genhtml

    QMAKE_CLEAN += build/*.gcda build/*.gcno build/coverage.info
}

include(core/core.pri)

#SUBDIRS += core
