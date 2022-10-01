// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSLEXRUNTIMEV2GLOBAL_H
#define QTAWSLEXRUNTIMEV2GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSLEXRUNTIMEV2_LIBRARY
#    define QTAWSLEXRUNTIMEV2_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSLEXRUNTIMEV2_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSLEXRUNTIMEV2_EXPORT
#endif


#endif // QTAWSLEXRUNTIMEV2GLOBAL_H
