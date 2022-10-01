// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESREQUEST_P_H
#define QTAWS_DESCRIBERULESREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describerulesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeRulesRequest;

class DescribeRulesRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeRulesRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeRulesRequest * const q);
    DescribeRulesRequestPrivate(const DescribeRulesRequestPrivate &other,
                                   DescribeRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRulesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
