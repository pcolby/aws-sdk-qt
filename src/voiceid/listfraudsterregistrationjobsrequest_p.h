// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAUDSTERREGISTRATIONJOBSREQUEST_P_H
#define QTAWS_LISTFRAUDSTERREGISTRATIONJOBSREQUEST_P_H

#include "voiceidrequest_p.h"
#include "listfraudsterregistrationjobsrequest.h"

namespace QtAws {
namespace VoiceId {

class ListFraudsterRegistrationJobsRequest;

class ListFraudsterRegistrationJobsRequestPrivate : public VoiceIdRequestPrivate {

public:
    ListFraudsterRegistrationJobsRequestPrivate(const VoiceIdRequest::Action action,
                                   ListFraudsterRegistrationJobsRequest * const q);
    ListFraudsterRegistrationJobsRequestPrivate(const ListFraudsterRegistrationJobsRequestPrivate &other,
                                   ListFraudsterRegistrationJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFraudsterRegistrationJobsRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
