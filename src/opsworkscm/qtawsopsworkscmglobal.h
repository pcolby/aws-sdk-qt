// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSOPSWORKSCMGLOBAL_H
#define QTAWSOPSWORKSCMGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSOPSWORKSCM_LIBRARY
#    define QTAWSOPSWORKSCM_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSOPSWORKSCM_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSOPSWORKSCM_EXPORT
#endif

#endif // QTAWSOPSWORKSCMGLOBAL_H
