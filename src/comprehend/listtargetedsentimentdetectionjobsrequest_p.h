// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETEDSENTIMENTDETECTIONJOBSREQUEST_P_H
#define QTAWS_LISTTARGETEDSENTIMENTDETECTIONJOBSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listtargetedsentimentdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListTargetedSentimentDetectionJobsRequest;

class ListTargetedSentimentDetectionJobsRequestPrivate : public ComprehendRequestPrivate {

public:
    ListTargetedSentimentDetectionJobsRequestPrivate(const ComprehendRequest::Action action,
                                   ListTargetedSentimentDetectionJobsRequest * const q);
    ListTargetedSentimentDetectionJobsRequestPrivate(const ListTargetedSentimentDetectionJobsRequestPrivate &other,
                                   ListTargetedSentimentDetectionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTargetedSentimentDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
