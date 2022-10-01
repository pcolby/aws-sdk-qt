// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFRAUDSTERREGISTRATIONJOBREQUEST_P_H
#define QTAWS_DESCRIBEFRAUDSTERREGISTRATIONJOBREQUEST_P_H

#include "voiceidrequest_p.h"
#include "describefraudsterregistrationjobrequest.h"

namespace QtAws {
namespace VoiceId {

class DescribeFraudsterRegistrationJobRequest;

class DescribeFraudsterRegistrationJobRequestPrivate : public VoiceIdRequestPrivate {

public:
    DescribeFraudsterRegistrationJobRequestPrivate(const VoiceIdRequest::Action action,
                                   DescribeFraudsterRegistrationJobRequest * const q);
    DescribeFraudsterRegistrationJobRequestPrivate(const DescribeFraudsterRegistrationJobRequestPrivate &other,
                                   DescribeFraudsterRegistrationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFraudsterRegistrationJobRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
