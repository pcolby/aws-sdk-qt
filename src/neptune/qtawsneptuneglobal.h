// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSNEPTUNEGLOBAL_H
#define QTAWSNEPTUNEGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSNEPTUNE_LIBRARY
#    define QTAWSNEPTUNE_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSNEPTUNE_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSNEPTUNE_EXPORT
#endif


#endif // QTAWSNEPTUNEGLOBAL_H
