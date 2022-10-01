// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSDIRECTORYSERVICEGLOBAL_H
#define QTAWSDIRECTORYSERVICEGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSDIRECTORYSERVICE_LIBRARY
#    define QTAWSDIRECTORYSERVICE_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSDIRECTORYSERVICE_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSDIRECTORYSERVICE_EXPORT
#endif


#endif // QTAWSDIRECTORYSERVICEGLOBAL_H
