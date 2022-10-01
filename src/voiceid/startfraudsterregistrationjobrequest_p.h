// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFRAUDSTERREGISTRATIONJOBREQUEST_P_H
#define QTAWS_STARTFRAUDSTERREGISTRATIONJOBREQUEST_P_H

#include "voiceidrequest_p.h"
#include "startfraudsterregistrationjobrequest.h"

namespace QtAws {
namespace VoiceId {

class StartFraudsterRegistrationJobRequest;

class StartFraudsterRegistrationJobRequestPrivate : public VoiceIdRequestPrivate {

public:
    StartFraudsterRegistrationJobRequestPrivate(const VoiceIdRequest::Action action,
                                   StartFraudsterRegistrationJobRequest * const q);
    StartFraudsterRegistrationJobRequestPrivate(const StartFraudsterRegistrationJobRequestPrivate &other,
                                   StartFraudsterRegistrationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFraudsterRegistrationJobRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
