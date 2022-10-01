// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEAKERENROLLMENTJOBSREQUEST_P_H
#define QTAWS_LISTSPEAKERENROLLMENTJOBSREQUEST_P_H

#include "voiceidrequest_p.h"
#include "listspeakerenrollmentjobsrequest.h"

namespace QtAws {
namespace VoiceId {

class ListSpeakerEnrollmentJobsRequest;

class ListSpeakerEnrollmentJobsRequestPrivate : public VoiceIdRequestPrivate {

public:
    ListSpeakerEnrollmentJobsRequestPrivate(const VoiceIdRequest::Action action,
                                   ListSpeakerEnrollmentJobsRequest * const q);
    ListSpeakerEnrollmentJobsRequestPrivate(const ListSpeakerEnrollmentJobsRequestPrivate &other,
                                   ListSpeakerEnrollmentJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSpeakerEnrollmentJobsRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
