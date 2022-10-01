// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSGREENGRASSV2GLOBAL_H
#define QTAWSGREENGRASSV2GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSGREENGRASSV2_LIBRARY
#    define QTAWSGREENGRASSV2_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSGREENGRASSV2_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSGREENGRASSV2_EXPORT
#endif


#endif // QTAWSGREENGRASSV2GLOBAL_H
