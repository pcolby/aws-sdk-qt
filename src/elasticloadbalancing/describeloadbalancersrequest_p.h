// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERSREQUEST_P_H
#define QTAWS_DESCRIBELOADBALANCERSREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "describeloadbalancersrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancersRequest;

class DescribeLoadBalancersRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DescribeLoadBalancersRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DescribeLoadBalancersRequest * const q);
    DescribeLoadBalancersRequestPrivate(const DescribeLoadBalancersRequestPrivate &other,
                                   DescribeLoadBalancersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancersRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
