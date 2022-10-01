// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSOUTPOSTSGLOBAL_H
#define QTAWSOUTPOSTSGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSOUTPOSTS_LIBRARY
#    define QTAWSOUTPOSTS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSOUTPOSTS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSOUTPOSTS_EXPORT
#endif


#endif // QTAWSOUTPOSTSGLOBAL_H
