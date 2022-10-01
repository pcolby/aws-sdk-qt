// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSPINPOINTSMSVOICEV2GLOBAL_H
#define QTAWSPINPOINTSMSVOICEV2GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSPINPOINTSMSVOICEV2_LIBRARY
#    define QTAWSPINPOINTSMSVOICEV2_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSPINPOINTSMSVOICEV2_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSPINPOINTSMSVOICEV2_EXPORT
#endif


#endif // QTAWSPINPOINTSMSVOICEV2GLOBAL_H
