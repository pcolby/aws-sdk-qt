TEMPLATE = aux
TOPDIR = "$$PWD/../.."
first.commands += doxygen all.dox && doxygen api.dox
QMAKE_EXTRA_TARGETS += first
QMAKE_SUBSTITUTES += all.dox.in api.dox.in
