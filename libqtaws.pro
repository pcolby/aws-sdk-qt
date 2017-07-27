TEMPLATE = subdirs
SUBDIRS += src test
CONFIG += ordered
doc.depends = src
test.depends = src
