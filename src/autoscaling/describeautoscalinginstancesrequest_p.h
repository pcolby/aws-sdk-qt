// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEAUTOSCALINGINSTANCESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describeautoscalinginstancesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingInstancesRequest;

class DescribeAutoScalingInstancesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeAutoScalingInstancesRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeAutoScalingInstancesRequest * const q);
    DescribeAutoScalingInstancesRequestPrivate(const DescribeAutoScalingInstancesRequestPrivate &other,
                                   DescribeAutoScalingInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAutoScalingInstancesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
