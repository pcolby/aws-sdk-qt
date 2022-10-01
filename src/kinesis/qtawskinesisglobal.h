// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSKINESISGLOBAL_H
#define QTAWSKINESISGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSKINESIS_LIBRARY
#    define QTAWSKINESIS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSKINESIS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSKINESIS_EXPORT
#endif


#endif // QTAWSKINESISGLOBAL_H
