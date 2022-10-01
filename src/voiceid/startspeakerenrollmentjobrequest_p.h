// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSPEAKERENROLLMENTJOBREQUEST_P_H
#define QTAWS_STARTSPEAKERENROLLMENTJOBREQUEST_P_H

#include "voiceidrequest_p.h"
#include "startspeakerenrollmentjobrequest.h"

namespace QtAws {
namespace VoiceId {

class StartSpeakerEnrollmentJobRequest;

class StartSpeakerEnrollmentJobRequestPrivate : public VoiceIdRequestPrivate {

public:
    StartSpeakerEnrollmentJobRequestPrivate(const VoiceIdRequest::Action action,
                                   StartSpeakerEnrollmentJobRequest * const q);
    StartSpeakerEnrollmentJobRequestPrivate(const StartSpeakerEnrollmentJobRequestPrivate &other,
                                   StartSpeakerEnrollmentJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSpeakerEnrollmentJobRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
