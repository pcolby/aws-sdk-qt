// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBELOADBALANCERATTRIBUTESREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "describeloadbalancerattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancerAttributesRequest;

class DescribeLoadBalancerAttributesRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DescribeLoadBalancerAttributesRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DescribeLoadBalancerAttributesRequest * const q);
    DescribeLoadBalancerAttributesRequestPrivate(const DescribeLoadBalancerAttributesRequestPrivate &other,
                                   DescribeLoadBalancerAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancerAttributesRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
