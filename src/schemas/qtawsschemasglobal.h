// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSSCHEMASGLOBAL_H
#define QTAWSSCHEMASGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSSCHEMAS_LIBRARY
#    define QTAWSSCHEMAS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSSCHEMAS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSSCHEMAS_EXPORT
#endif

#endif // QTAWSSCHEMASGLOBAL_H
