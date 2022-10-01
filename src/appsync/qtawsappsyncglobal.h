// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSAPPSYNCGLOBAL_H
#define QTAWSAPPSYNCGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSAPPSYNC_LIBRARY
#    define QTAWSAPPSYNC_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSAPPSYNC_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSAPPSYNC_EXPORT
#endif

#endif // QTAWSAPPSYNCGLOBAL_H
