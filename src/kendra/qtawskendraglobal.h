// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSKENDRAGLOBAL_H
#define QTAWSKENDRAGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSKENDRA_LIBRARY
#    define QTAWSKENDRA_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSKENDRA_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSKENDRA_EXPORT
#endif


#endif // QTAWSKENDRAGLOBAL_H
