// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICSDETECTIONJOBSREQUEST_P_H
#define QTAWS_LISTTOPICSDETECTIONJOBSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listtopicsdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListTopicsDetectionJobsRequest;

class ListTopicsDetectionJobsRequestPrivate : public ComprehendRequestPrivate {

public:
    ListTopicsDetectionJobsRequestPrivate(const ComprehendRequest::Action action,
                                   ListTopicsDetectionJobsRequest * const q);
    ListTopicsDetectionJobsRequestPrivate(const ListTopicsDetectionJobsRequestPrivate &other,
                                   ListTopicsDetectionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTopicsDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
