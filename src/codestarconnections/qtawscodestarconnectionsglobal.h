// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSCODESTARCONNECTIONSGLOBAL_H
#define QTAWSCODESTARCONNECTIONSGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSCODESTARCONNECTIONS_LIBRARY
#    define QTAWSCODESTARCONNECTIONS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSCODESTARCONNECTIONS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSCODESTARCONNECTIONS_EXPORT
#endif


#endif // QTAWSCODESTARCONNECTIONSGLOBAL_H
