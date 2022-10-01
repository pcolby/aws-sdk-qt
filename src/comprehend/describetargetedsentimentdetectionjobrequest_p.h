// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETEDSENTIMENTDETECTIONJOBREQUEST_P_H
#define QTAWS_DESCRIBETARGETEDSENTIMENTDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describetargetedsentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeTargetedSentimentDetectionJobRequest;

class DescribeTargetedSentimentDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeTargetedSentimentDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeTargetedSentimentDetectionJobRequest * const q);
    DescribeTargetedSentimentDetectionJobRequestPrivate(const DescribeTargetedSentimentDetectionJobRequestPrivate &other,
                                   DescribeTargetedSentimentDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTargetedSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
