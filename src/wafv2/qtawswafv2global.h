// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSWAFV2GLOBAL_H
#define QTAWSWAFV2GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSWAFV2_LIBRARY
#    define QTAWSWAFV2_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSWAFV2_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSWAFV2_EXPORT
#endif

#endif // QTAWSWAFV2GLOBAL_H
