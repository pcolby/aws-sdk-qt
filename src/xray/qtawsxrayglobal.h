// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSXRAYGLOBAL_H
#define QTAWSXRAYGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSXRAY_LIBRARY
#    define QTAWSXRAY_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSXRAY_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSXRAY_EXPORT
#endif


#endif // QTAWSXRAYGLOBAL_H
