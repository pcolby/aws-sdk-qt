// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSLIGHTSAILGLOBAL_H
#define QTAWSLIGHTSAILGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSLIGHTSAIL_LIBRARY
#    define QTAWSLIGHTSAIL_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSLIGHTSAIL_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSLIGHTSAIL_EXPORT
#endif

#endif // QTAWSLIGHTSAILGLOBAL_H
