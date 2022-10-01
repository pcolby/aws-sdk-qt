// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSMEDIASTOREDATAGLOBAL_H
#define QTAWSMEDIASTOREDATAGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSMEDIASTOREDATA_LIBRARY
#    define QTAWSMEDIASTOREDATA_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSMEDIASTOREDATA_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSMEDIASTOREDATA_EXPORT
#endif


#endif // QTAWSMEDIASTOREDATAGLOBAL_H
