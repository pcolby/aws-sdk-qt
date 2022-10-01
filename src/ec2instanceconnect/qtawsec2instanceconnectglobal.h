// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSEC2INSTANCECONNECTGLOBAL_H
#define QTAWSEC2INSTANCECONNECTGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSEC2INSTANCECONNECT_LIBRARY
#    define QTAWSEC2INSTANCECONNECT_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSEC2INSTANCECONNECT_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSEC2INSTANCECONNECT_EXPORT
#endif

#endif // QTAWSEC2INSTANCECONNECTGLOBAL_H
