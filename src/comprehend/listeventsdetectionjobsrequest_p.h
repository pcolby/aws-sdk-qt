// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSDETECTIONJOBSREQUEST_P_H
#define QTAWS_LISTEVENTSDETECTIONJOBSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listeventsdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEventsDetectionJobsRequest;

class ListEventsDetectionJobsRequestPrivate : public ComprehendRequestPrivate {

public:
    ListEventsDetectionJobsRequestPrivate(const ComprehendRequest::Action action,
                                   ListEventsDetectionJobsRequest * const q);
    ListEventsDetectionJobsRequestPrivate(const ListEventsDetectionJobsRequestPrivate &other,
                                   ListEventsDetectionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventsDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
