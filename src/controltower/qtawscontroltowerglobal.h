// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSCONTROLTOWERGLOBAL_H
#define QTAWSCONTROLTOWERGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSCONTROLTOWER_LIBRARY
#    define QTAWSCONTROLTOWER_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSCONTROLTOWER_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSCONTROLTOWER_EXPORT
#endif


#endif // QTAWSCONTROLTOWERGLOBAL_H
