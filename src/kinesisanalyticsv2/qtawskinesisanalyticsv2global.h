// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSKINESISANALYTICSV2GLOBAL_H
#define QTAWSKINESISANALYTICSV2GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSKINESISANALYTICSV2_LIBRARY
#    define QTAWSKINESISANALYTICSV2_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSKINESISANALYTICSV2_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSKINESISANALYTICSV2_EXPORT
#endif

#endif // QTAWSKINESISANALYTICSV2GLOBAL_H
