// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERPOLICYTYPESREQUEST_P_H
#define QTAWS_DESCRIBELOADBALANCERPOLICYTYPESREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "describeloadbalancerpolicytypesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancerPolicyTypesRequest;

class DescribeLoadBalancerPolicyTypesRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DescribeLoadBalancerPolicyTypesRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DescribeLoadBalancerPolicyTypesRequest * const q);
    DescribeLoadBalancerPolicyTypesRequestPrivate(const DescribeLoadBalancerPolicyTypesRequestPrivate &other,
                                   DescribeLoadBalancerPolicyTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancerPolicyTypesRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
