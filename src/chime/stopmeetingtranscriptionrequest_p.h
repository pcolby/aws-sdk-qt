// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMEETINGTRANSCRIPTIONREQUEST_P_H
#define QTAWS_STOPMEETINGTRANSCRIPTIONREQUEST_P_H

#include "chimerequest_p.h"
#include "stopmeetingtranscriptionrequest.h"

namespace QtAws {
namespace Chime {

class StopMeetingTranscriptionRequest;

class StopMeetingTranscriptionRequestPrivate : public ChimeRequestPrivate {

public:
    StopMeetingTranscriptionRequestPrivate(const ChimeRequest::Action action,
                                   StopMeetingTranscriptionRequest * const q);
    StopMeetingTranscriptionRequestPrivate(const StopMeetingTranscriptionRequestPrivate &other,
                                   StopMeetingTranscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopMeetingTranscriptionRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
