// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPEAKERENROLLMENTJOBREQUEST_P_H
#define QTAWS_DESCRIBESPEAKERENROLLMENTJOBREQUEST_P_H

#include "voiceidrequest_p.h"
#include "describespeakerenrollmentjobrequest.h"

namespace QtAws {
namespace VoiceId {

class DescribeSpeakerEnrollmentJobRequest;

class DescribeSpeakerEnrollmentJobRequestPrivate : public VoiceIdRequestPrivate {

public:
    DescribeSpeakerEnrollmentJobRequestPrivate(const VoiceIdRequest::Action action,
                                   DescribeSpeakerEnrollmentJobRequest * const q);
    DescribeSpeakerEnrollmentJobRequestPrivate(const DescribeSpeakerEnrollmentJobRequestPrivate &other,
                                   DescribeSpeakerEnrollmentJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpeakerEnrollmentJobRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
