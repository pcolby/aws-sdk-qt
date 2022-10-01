// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERTARGETGROUPSREQUEST_P_H
#define QTAWS_DETACHLOADBALANCERTARGETGROUPSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "detachloadbalancertargetgroupsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DetachLoadBalancerTargetGroupsRequest;

class DetachLoadBalancerTargetGroupsRequestPrivate : public AutoScalingRequestPrivate {

public:
    DetachLoadBalancerTargetGroupsRequestPrivate(const AutoScalingRequest::Action action,
                                   DetachLoadBalancerTargetGroupsRequest * const q);
    DetachLoadBalancerTargetGroupsRequestPrivate(const DetachLoadBalancerTargetGroupsRequestPrivate &other,
                                   DetachLoadBalancerTargetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachLoadBalancerTargetGroupsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
