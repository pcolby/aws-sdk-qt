// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERFROMSUBNETSREQUEST_P_H
#define QTAWS_DETACHLOADBALANCERFROMSUBNETSREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "detachloadbalancerfromsubnetsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DetachLoadBalancerFromSubnetsRequest;

class DetachLoadBalancerFromSubnetsRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DetachLoadBalancerFromSubnetsRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DetachLoadBalancerFromSubnetsRequest * const q);
    DetachLoadBalancerFromSubnetsRequestPrivate(const DetachLoadBalancerFromSubnetsRequestPrivate &other,
                                   DetachLoadBalancerFromSubnetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachLoadBalancerFromSubnetsRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
