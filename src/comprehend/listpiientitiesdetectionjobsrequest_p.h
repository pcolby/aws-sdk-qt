// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIIENTITIESDETECTIONJOBSREQUEST_P_H
#define QTAWS_LISTPIIENTITIESDETECTIONJOBSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listpiientitiesdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListPiiEntitiesDetectionJobsRequest;

class ListPiiEntitiesDetectionJobsRequestPrivate : public ComprehendRequestPrivate {

public:
    ListPiiEntitiesDetectionJobsRequestPrivate(const ComprehendRequest::Action action,
                                   ListPiiEntitiesDetectionJobsRequest * const q);
    ListPiiEntitiesDetectionJobsRequestPrivate(const ListPiiEntitiesDetectionJobsRequestPrivate &other,
                                   ListPiiEntitiesDetectionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPiiEntitiesDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
