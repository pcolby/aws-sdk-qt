TEMPLATE = subdirs
SUBDIRS += doxygen

qtPrepareTool(QDOC, qdoc)
QDOC_COMMAND = QT_INSTALL_DOCS=$$shell_quote($$shell_path($$[QT_INSTALL_DOCS])) $$QDOC --single-exec master.qdocconf
QDOC_SRCDIR  = $$shell_quote($$shell_path($$absolute_path($$PWD/../src)))
QDOC_DSTDIR  = $$shell_quote($$shell_path($$OUT_PWD/api))
QDOC_INTDIR  = $$shell_quote($$shell_path($$OUT_PWD/int))

apidocs.commands = \
  $$QMAKE_DEL_TREE $$QDOC_DSTDIR && $$QMAKE_CD $$QDOC_SRCDIR && $$QDOC_COMMAND --outputdir $$QDOC_DSTDIR
intdocs.commands = \
  $$QMAKE_DEL_TREE $$QDOC_INTDIR && $$QMAKE_CD $$QDOC_SRCDIR && $$QDOC_COMMAND --outputdir $$QDOC_INTDIR --showinternal

docs.depends = apidocs intdocs

QMAKE_EXTRA_TARGETS = apidocs docs intdocs
