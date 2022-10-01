// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSENTIMENTDETECTIONJOBSREQUEST_P_H
#define QTAWS_LISTSENTIMENTDETECTIONJOBSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listsentimentdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListSentimentDetectionJobsRequest;

class ListSentimentDetectionJobsRequestPrivate : public ComprehendRequestPrivate {

public:
    ListSentimentDetectionJobsRequestPrivate(const ComprehendRequest::Action action,
                                   ListSentimentDetectionJobsRequest * const q);
    ListSentimentDetectionJobsRequestPrivate(const ListSentimentDetectionJobsRequestPrivate &other,
                                   ListSentimentDetectionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSentimentDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
