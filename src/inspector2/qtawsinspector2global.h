// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSINSPECTOR2GLOBAL_H
#define QTAWSINSPECTOR2GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSINSPECTOR2_LIBRARY
#    define QTAWSINSPECTOR2_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSINSPECTOR2_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSINSPECTOR2_EXPORT
#endif

#endif // QTAWSINSPECTOR2GLOBAL_H
