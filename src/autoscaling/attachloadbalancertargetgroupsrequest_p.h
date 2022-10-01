// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTARGETGROUPSREQUEST_P_H
#define QTAWS_ATTACHLOADBALANCERTARGETGROUPSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "attachloadbalancertargetgroupsrequest.h"

namespace QtAws {
namespace AutoScaling {

class AttachLoadBalancerTargetGroupsRequest;

class AttachLoadBalancerTargetGroupsRequestPrivate : public AutoScalingRequestPrivate {

public:
    AttachLoadBalancerTargetGroupsRequestPrivate(const AutoScalingRequest::Action action,
                                   AttachLoadBalancerTargetGroupsRequest * const q);
    AttachLoadBalancerTargetGroupsRequestPrivate(const AttachLoadBalancerTargetGroupsRequestPrivate &other,
                                   AttachLoadBalancerTargetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachLoadBalancerTargetGroupsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
