// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSSSMGLOBAL_H
#define QTAWSSSMGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSSSM_LIBRARY
#    define QTAWSSSM_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSSSM_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSSSM_EXPORT
#endif

#endif // QTAWSSSMGLOBAL_H
