// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERPOLICIESREQUEST_P_H
#define QTAWS_DESCRIBELOADBALANCERPOLICIESREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "describeloadbalancerpoliciesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancerPoliciesRequest;

class DescribeLoadBalancerPoliciesRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DescribeLoadBalancerPoliciesRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DescribeLoadBalancerPoliciesRequest * const q);
    DescribeLoadBalancerPoliciesRequestPrivate(const DescribeLoadBalancerPoliciesRequestPrivate &other,
                                   DescribeLoadBalancerPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancerPoliciesRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
