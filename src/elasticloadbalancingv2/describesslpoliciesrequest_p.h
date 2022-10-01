// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESSLPOLICIESREQUEST_P_H
#define QTAWS_DESCRIBESSLPOLICIESREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describesslpoliciesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeSSLPoliciesRequest;

class DescribeSSLPoliciesRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeSSLPoliciesRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeSSLPoliciesRequest * const q);
    DescribeSSLPoliciesRequestPrivate(const DescribeSSLPoliciesRequestPrivate &other,
                                   DescribeSSLPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSSLPoliciesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
