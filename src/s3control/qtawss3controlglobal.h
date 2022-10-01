// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSS3CONTROLGLOBAL_H
#define QTAWSS3CONTROLGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSS3CONTROL_LIBRARY
#    define QTAWSS3CONTROL_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSS3CONTROL_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSS3CONTROL_EXPORT
#endif

#endif // QTAWSS3CONTROLGLOBAL_H
