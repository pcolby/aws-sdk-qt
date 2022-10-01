// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSKEYSPACESGLOBAL_H
#define QTAWSKEYSPACESGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSKEYSPACES_LIBRARY
#    define QTAWSKEYSPACES_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSKEYSPACES_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSKEYSPACES_EXPORT
#endif

#endif // QTAWSKEYSPACESGLOBAL_H
