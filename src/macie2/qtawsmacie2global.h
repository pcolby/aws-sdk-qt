// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSMACIE2GLOBAL_H
#define QTAWSMACIE2GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSMACIE2_LIBRARY
#    define QTAWSMACIE2_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSMACIE2_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSMACIE2_EXPORT
#endif

#endif // QTAWSMACIE2GLOBAL_H
