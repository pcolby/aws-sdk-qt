// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSWAFREGIONALGLOBAL_H
#define QTAWSWAFREGIONALGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSWAFREGIONAL_LIBRARY
#    define QTAWSWAFREGIONAL_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSWAFREGIONAL_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSWAFREGIONAL_EXPORT
#endif


#endif // QTAWSWAFREGIONALGLOBAL_H
