// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSQLDBGLOBAL_H
#define QTAWSQLDBGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSQLDB_LIBRARY
#    define QTAWSQLDB_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSQLDB_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSQLDB_EXPORT
#endif


#endif // QTAWSQLDBGLOBAL_H
