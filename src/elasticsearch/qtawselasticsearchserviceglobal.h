// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSELASTICSEARCHGLOBAL_H
#define QTAWSELASTICSEARCHGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSELASTICSEARCH_LIBRARY
#    define QTAWSELASTICSEARCH_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSELASTICSEARCH_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSELASTICSEARCH_EXPORT
#endif


#endif // QTAWSELASTICSEARCHGLOBAL_H
