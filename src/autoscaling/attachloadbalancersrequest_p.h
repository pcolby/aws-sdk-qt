// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERSREQUEST_P_H
#define QTAWS_ATTACHLOADBALANCERSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "attachloadbalancersrequest.h"

namespace QtAws {
namespace AutoScaling {

class AttachLoadBalancersRequest;

class AttachLoadBalancersRequestPrivate : public AutoScalingRequestPrivate {

public:
    AttachLoadBalancersRequestPrivate(const AutoScalingRequest::Action action,
                                   AttachLoadBalancersRequest * const q);
    AttachLoadBalancersRequestPrivate(const AttachLoadBalancersRequestPrivate &other,
                                   AttachLoadBalancersRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachLoadBalancersRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
