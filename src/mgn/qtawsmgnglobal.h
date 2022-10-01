// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSMGNGLOBAL_H
#define QTAWSMGNGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSMGN_LIBRARY
#    define QTAWSMGN_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSMGN_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSMGN_EXPORT
#endif

#endif // QTAWSMGNGLOBAL_H
