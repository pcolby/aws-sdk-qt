// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSROUTE53RESOLVERGLOBAL_H
#define QTAWSROUTE53RESOLVERGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSROUTE53RESOLVER_LIBRARY
#    define QTAWSROUTE53RESOLVER_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSROUTE53RESOLVER_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSROUTE53RESOLVER_EXPORT
#endif

#endif // QTAWSROUTE53RESOLVERGLOBAL_H
