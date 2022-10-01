// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSLEXMODELSV2GLOBAL_H
#define QTAWSLEXMODELSV2GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSLEXMODELSV2_LIBRARY
#    define QTAWSLEXMODELSV2_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSLEXMODELSV2_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSLEXMODELSV2_EXPORT
#endif

#endif // QTAWSLEXMODELSV2GLOBAL_H
