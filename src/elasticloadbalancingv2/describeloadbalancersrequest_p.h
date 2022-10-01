// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERSREQUEST_P_H
#define QTAWS_DESCRIBELOADBALANCERSREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describeloadbalancersrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeLoadBalancersRequest;

class DescribeLoadBalancersRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeLoadBalancersRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeLoadBalancersRequest * const q);
    DescribeLoadBalancersRequestPrivate(const DescribeLoadBalancersRequestPrivate &other,
                                   DescribeLoadBalancersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancersRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
