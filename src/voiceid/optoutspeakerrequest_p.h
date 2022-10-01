// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPTOUTSPEAKERREQUEST_P_H
#define QTAWS_OPTOUTSPEAKERREQUEST_P_H

#include "voiceidrequest_p.h"
#include "optoutspeakerrequest.h"

namespace QtAws {
namespace VoiceId {

class OptOutSpeakerRequest;

class OptOutSpeakerRequestPrivate : public VoiceIdRequestPrivate {

public:
    OptOutSpeakerRequestPrivate(const VoiceIdRequest::Action action,
                                   OptOutSpeakerRequest * const q);
    OptOutSpeakerRequestPrivate(const OptOutSpeakerRequestPrivate &other,
                                   OptOutSpeakerRequest * const q);

private:
    Q_DECLARE_PUBLIC(OptOutSpeakerRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
