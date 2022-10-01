// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSWELLARCHITECTEDGLOBAL_H
#define QTAWSWELLARCHITECTEDGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSWELLARCHITECTED_LIBRARY
#    define QTAWSWELLARCHITECTED_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSWELLARCHITECTED_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSWELLARCHITECTED_EXPORT
#endif


#endif // QTAWSWELLARCHITECTEDGLOBAL_H
