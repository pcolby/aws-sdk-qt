// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSREDSHIFTSERVERLESSGLOBAL_H
#define QTAWSREDSHIFTSERVERLESSGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSREDSHIFTSERVERLESS_LIBRARY
#    define QTAWSREDSHIFTSERVERLESS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSREDSHIFTSERVERLESS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSREDSHIFTSERVERLESS_EXPORT
#endif


#endif // QTAWSREDSHIFTSERVERLESSGLOBAL_H
