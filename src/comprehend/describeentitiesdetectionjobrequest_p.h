// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITIESDETECTIONJOBREQUEST_P_H
#define QTAWS_DESCRIBEENTITIESDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describeentitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEntitiesDetectionJobRequest;

class DescribeEntitiesDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeEntitiesDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeEntitiesDetectionJobRequest * const q);
    DescribeEntitiesDetectionJobRequestPrivate(const DescribeEntitiesDetectionJobRequestPrivate &other,
                                   DescribeEntitiesDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
