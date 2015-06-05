TEMPLATE = aux
first.commands = doxygen $$PWD/all.dox && doxygen $$PWD/api.dox
QMAKE_EXTRA_TARGETS += first
