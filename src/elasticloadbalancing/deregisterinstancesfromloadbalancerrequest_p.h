// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCESFROMLOADBALANCERREQUEST_P_H
#define QTAWS_DEREGISTERINSTANCESFROMLOADBALANCERREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "deregisterinstancesfromloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeregisterInstancesFromLoadBalancerRequest;

class DeregisterInstancesFromLoadBalancerRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DeregisterInstancesFromLoadBalancerRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DeregisterInstancesFromLoadBalancerRequest * const q);
    DeregisterInstancesFromLoadBalancerRequestPrivate(const DeregisterInstancesFromLoadBalancerRequestPrivate &other,
                                   DeregisterInstancesFromLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterInstancesFromLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
