// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSEMRGLOBAL_H
#define QTAWSEMRGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSEMR_LIBRARY
#    define QTAWSEMR_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSEMR_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSEMR_EXPORT
#endif

#endif // QTAWSEMRGLOBAL_H
