// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSSTORAGEGATEWAYGLOBAL_H
#define QTAWSSTORAGEGATEWAYGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSSTORAGEGATEWAY_LIBRARY
#    define QTAWSSTORAGEGATEWAY_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSSTORAGEGATEWAY_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSSTORAGEGATEWAY_EXPORT
#endif

#endif // QTAWSSTORAGEGATEWAYGLOBAL_H
