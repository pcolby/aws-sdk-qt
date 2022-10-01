// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describeaccountlimitsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeAccountLimitsRequest;

class DescribeAccountLimitsRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeAccountLimitsRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeAccountLimitsRequest * const q);
    DescribeAccountLimitsRequestPrivate(const DescribeAccountLimitsRequestPrivate &other,
                                   DescribeAccountLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountLimitsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
