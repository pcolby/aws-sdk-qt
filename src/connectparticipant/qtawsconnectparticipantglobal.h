// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSCONNECTPARTICIPANTGLOBAL_H
#define QTAWSCONNECTPARTICIPANTGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSCONNECTPARTICIPANT_LIBRARY
#    define QTAWSCONNECTPARTICIPANT_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSCONNECTPARTICIPANT_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSCONNECTPARTICIPANT_EXPORT
#endif

#endif // QTAWSCONNECTPARTICIPANTGLOBAL_H
