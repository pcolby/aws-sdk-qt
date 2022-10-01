// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSIOTGLOBAL_H
#define QTAWSIOTGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSIOT_LIBRARY
#    define QTAWSIOT_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSIOT_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSIOT_EXPORT
#endif

#endif // QTAWSIOTGLOBAL_H
