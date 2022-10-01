// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSREDSHIFTGLOBAL_H
#define QTAWSREDSHIFTGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSREDSHIFT_LIBRARY
#    define QTAWSREDSHIFT_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSREDSHIFT_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSREDSHIFT_EXPORT
#endif


#endif // QTAWSREDSHIFTGLOBAL_H
