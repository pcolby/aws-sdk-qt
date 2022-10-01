// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESDETECTIONJOBSREQUEST_P_H
#define QTAWS_LISTENTITIESDETECTIONJOBSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listentitiesdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEntitiesDetectionJobsRequest;

class ListEntitiesDetectionJobsRequestPrivate : public ComprehendRequestPrivate {

public:
    ListEntitiesDetectionJobsRequestPrivate(const ComprehendRequest::Action action,
                                   ListEntitiesDetectionJobsRequest * const q);
    ListEntitiesDetectionJobsRequestPrivate(const ListEntitiesDetectionJobsRequestPrivate &other,
                                   ListEntitiesDetectionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEntitiesDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
