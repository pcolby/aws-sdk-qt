// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERTARGETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBELOADBALANCERTARGETGROUPSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describeloadbalancertargetgroupsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLoadBalancerTargetGroupsRequest;

class DescribeLoadBalancerTargetGroupsRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeLoadBalancerTargetGroupsRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeLoadBalancerTargetGroupsRequest * const q);
    DescribeLoadBalancerTargetGroupsRequestPrivate(const DescribeLoadBalancerTargetGroupsRequestPrivate &other,
                                   DescribeLoadBalancerTargetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancerTargetGroupsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
