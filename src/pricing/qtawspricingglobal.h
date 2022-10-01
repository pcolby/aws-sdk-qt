// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSPRICINGGLOBAL_H
#define QTAWSPRICINGGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSPRICING_LIBRARY
#    define QTAWSPRICING_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSPRICING_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSPRICING_EXPORT
#endif


#endif // QTAWSPRICINGGLOBAL_H
