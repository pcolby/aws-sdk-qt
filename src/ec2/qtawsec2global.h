// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSEC2GLOBAL_H
#define QTAWSEC2GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSEC2_LIBRARY
#    define QTAWSEC2_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSEC2_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSEC2_EXPORT
#endif

#endif // QTAWSEC2GLOBAL_H
