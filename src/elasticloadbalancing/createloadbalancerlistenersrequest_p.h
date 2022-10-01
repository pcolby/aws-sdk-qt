// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERLISTENERSREQUEST_P_H
#define QTAWS_CREATELOADBALANCERLISTENERSREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "createloadbalancerlistenersrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLoadBalancerListenersRequest;

class CreateLoadBalancerListenersRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    CreateLoadBalancerListenersRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   CreateLoadBalancerListenersRequest * const q);
    CreateLoadBalancerListenersRequestPrivate(const CreateLoadBalancerListenersRequestPrivate &other,
                                   CreateLoadBalancerListenersRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLoadBalancerListenersRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
