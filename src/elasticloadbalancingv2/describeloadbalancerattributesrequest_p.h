// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBELOADBALANCERATTRIBUTESREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describeloadbalancerattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeLoadBalancerAttributesRequest;

class DescribeLoadBalancerAttributesRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeLoadBalancerAttributesRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeLoadBalancerAttributesRequest * const q);
    DescribeLoadBalancerAttributesRequestPrivate(const DescribeLoadBalancerAttributesRequestPrivate &other,
                                   DescribeLoadBalancerAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancerAttributesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
