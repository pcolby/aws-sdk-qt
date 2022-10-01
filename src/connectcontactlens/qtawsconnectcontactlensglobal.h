// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSCONNECTCONTACTLENSGLOBAL_H
#define QTAWSCONNECTCONTACTLENSGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSCONNECTCONTACTLENS_LIBRARY
#    define QTAWSCONNECTCONTACTLENS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSCONNECTCONTACTLENS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSCONNECTCONTACTLENS_EXPORT
#endif


#endif // QTAWSCONNECTCONTACTLENSGLOBAL_H
