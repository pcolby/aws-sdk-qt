// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSWORKMAILGLOBAL_H
#define QTAWSWORKMAILGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSWORKMAIL_LIBRARY
#    define QTAWSWORKMAIL_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSWORKMAIL_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSWORKMAIL_EXPORT
#endif


#endif // QTAWSWORKMAILGLOBAL_H
