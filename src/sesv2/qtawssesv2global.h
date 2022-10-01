// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSSESV2GLOBAL_H
#define QTAWSSESV2GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSSESV2_LIBRARY
#    define QTAWSSESV2_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSSESV2_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSSESV2_EXPORT
#endif

#endif // QTAWSSESV2GLOBAL_H
