// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSORGANIZATIONSGLOBAL_H
#define QTAWSORGANIZATIONSGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSORGANIZATIONS_LIBRARY
#    define QTAWSORGANIZATIONS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSORGANIZATIONS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSORGANIZATIONS_EXPORT
#endif

#endif // QTAWSORGANIZATIONSGLOBAL_H
