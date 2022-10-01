// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSTEXTRACTGLOBAL_H
#define QTAWSTEXTRACTGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSTEXTRACT_LIBRARY
#    define QTAWSTEXTRACT_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSTEXTRACT_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSTEXTRACT_EXPORT
#endif


#endif // QTAWSTEXTRACTGLOBAL_H
