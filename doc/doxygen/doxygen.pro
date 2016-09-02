include(../../common.pri)
DOXDIR = "$$PWD"
TEMPLATE = aux
PROJECT_NUMBER = "$$VERSION"
!equals(RELEASE_PHASE, "release"): PROJECT_NUMBER = $$PROJECT_NUMBER-$$RELEASE_PHASE
first.commands += doxygen all.dox && doxygen api.dox
QMAKE_EXTRA_TARGETS += first
QMAKE_SUBSTITUTES += all.dox.in api.dox.in
