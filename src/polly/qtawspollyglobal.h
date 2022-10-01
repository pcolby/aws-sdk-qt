// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSPOLLYGLOBAL_H
#define QTAWSPOLLYGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSPOLLY_LIBRARY
#    define QTAWSPOLLY_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSPOLLY_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSPOLLY_EXPORT
#endif


#endif // QTAWSPOLLYGLOBAL_H
