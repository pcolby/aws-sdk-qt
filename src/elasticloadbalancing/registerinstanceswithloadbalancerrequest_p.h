// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCESWITHLOADBALANCERREQUEST_P_H
#define QTAWS_REGISTERINSTANCESWITHLOADBALANCERREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "registerinstanceswithloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class RegisterInstancesWithLoadBalancerRequest;

class RegisterInstancesWithLoadBalancerRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    RegisterInstancesWithLoadBalancerRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   RegisterInstancesWithLoadBalancerRequest * const q);
    RegisterInstancesWithLoadBalancerRequestPrivate(const RegisterInstancesWithLoadBalancerRequestPrivate &other,
                                   RegisterInstancesWithLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterInstancesWithLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
