// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSWORKSPACESGLOBAL_H
#define QTAWSWORKSPACESGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSWORKSPACES_LIBRARY
#    define QTAWSWORKSPACES_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSWORKSPACES_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSWORKSPACES_EXPORT
#endif


#endif // QTAWSWORKSPACESGLOBAL_H
