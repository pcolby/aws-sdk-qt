TEMPLATE = subdirs
SUBDIRS += src test doc
CONFIG += ordered
doc.depends = src
test.depends = src
