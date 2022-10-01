// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEETINGTRANSCRIPTIONREQUEST_P_H
#define QTAWS_STARTMEETINGTRANSCRIPTIONREQUEST_P_H

#include "chimerequest_p.h"
#include "startmeetingtranscriptionrequest.h"

namespace QtAws {
namespace Chime {

class StartMeetingTranscriptionRequest;

class StartMeetingTranscriptionRequestPrivate : public ChimeRequestPrivate {

public:
    StartMeetingTranscriptionRequestPrivate(const ChimeRequest::Action action,
                                   StartMeetingTranscriptionRequest * const q);
    StartMeetingTranscriptionRequestPrivate(const StartMeetingTranscriptionRequestPrivate &other,
                                   StartMeetingTranscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMeetingTranscriptionRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
