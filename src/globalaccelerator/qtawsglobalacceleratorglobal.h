// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSGLOBALACCELERATORGLOBAL_H
#define QTAWSGLOBALACCELERATORGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSGLOBALACCELERATOR_LIBRARY
#    define QTAWSGLOBALACCELERATOR_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSGLOBALACCELERATOR_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSGLOBALACCELERATOR_EXPORT
#endif


#endif // QTAWSGLOBALACCELERATORGLOBAL_H
