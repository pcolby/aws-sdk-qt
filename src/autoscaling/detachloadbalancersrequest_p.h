// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERSREQUEST_P_H
#define QTAWS_DETACHLOADBALANCERSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "detachloadbalancersrequest.h"

namespace QtAws {
namespace AutoScaling {

class DetachLoadBalancersRequest;

class DetachLoadBalancersRequestPrivate : public AutoScalingRequestPrivate {

public:
    DetachLoadBalancersRequestPrivate(const AutoScalingRequest::Action action,
                                   DetachLoadBalancersRequest * const q);
    DetachLoadBalancersRequestPrivate(const DetachLoadBalancersRequestPrivate &other,
                                   DetachLoadBalancersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachLoadBalancersRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
