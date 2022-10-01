// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSCLOUD9GLOBAL_H
#define QTAWSCLOUD9GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSCLOUD9_LIBRARY
#    define QTAWSCLOUD9_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSCLOUD9_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSCLOUD9_EXPORT
#endif


#endif // QTAWSCLOUD9GLOBAL_H
