// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSDETECTIONJOBREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describeeventsdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEventsDetectionJobRequest;

class DescribeEventsDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeEventsDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeEventsDetectionJobRequest * const q);
    DescribeEventsDetectionJobRequestPrivate(const DescribeEventsDetectionJobRequestPrivate &other,
                                   DescribeEventsDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventsDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
