// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSIOT1CLICKPROJECTSGLOBAL_H
#define QTAWSIOT1CLICKPROJECTSGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSIOT1CLICKPROJECTS_LIBRARY
#    define QTAWSIOT1CLICKPROJECTS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSIOT1CLICKPROJECTS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSIOT1CLICKPROJECTS_EXPORT
#endif


#endif // QTAWSIOT1CLICKPROJECTSGLOBAL_H
