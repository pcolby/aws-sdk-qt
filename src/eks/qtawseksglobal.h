// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSEKSGLOBAL_H
#define QTAWSEKSGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSEKS_LIBRARY
#    define QTAWSEKS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSEKS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSEKS_EXPORT
#endif


#endif // QTAWSEKSGLOBAL_H
