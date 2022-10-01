// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSCHIMESDKMESSAGINGGLOBAL_H
#define QTAWSCHIMESDKMESSAGINGGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSCHIMESDKMESSAGING_LIBRARY
#    define QTAWSCHIMESDKMESSAGING_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSCHIMESDKMESSAGING_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSCHIMESDKMESSAGING_EXPORT
#endif


#endif // QTAWSCHIMESDKMESSAGINGGLOBAL_H
