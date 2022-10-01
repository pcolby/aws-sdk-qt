// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSCLOUDWATCHEVENTSGLOBAL_H
#define QTAWSCLOUDWATCHEVENTSGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSCLOUDWATCHEVENTS_LIBRARY
#    define QTAWSCLOUDWATCHEVENTS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSCLOUDWATCHEVENTS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSCLOUDWATCHEVENTS_EXPORT
#endif


#endif // QTAWSCLOUDWATCHEVENTSGLOBAL_H
