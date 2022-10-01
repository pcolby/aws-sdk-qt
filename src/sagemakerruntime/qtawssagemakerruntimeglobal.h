// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSSAGEMAKERRUNTIMEGLOBAL_H
#define QTAWSSAGEMAKERRUNTIMEGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSSAGEMAKERRUNTIME_LIBRARY
#    define QTAWSSAGEMAKERRUNTIME_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSSAGEMAKERRUNTIME_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSSAGEMAKERRUNTIME_EXPORT
#endif

#endif // QTAWSSAGEMAKERRUNTIMEGLOBAL_H
