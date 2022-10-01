// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSLICENSEMANAGERGLOBAL_H
#define QTAWSLICENSEMANAGERGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSLICENSEMANAGER_LIBRARY
#    define QTAWSLICENSEMANAGER_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSLICENSEMANAGER_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSLICENSEMANAGER_EXPORT
#endif

#endif // QTAWSLICENSEMANAGERGLOBAL_H
