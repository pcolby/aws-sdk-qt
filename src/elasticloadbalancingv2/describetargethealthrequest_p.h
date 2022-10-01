// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETHEALTHREQUEST_P_H
#define QTAWS_DESCRIBETARGETHEALTHREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describetargethealthrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetHealthRequest;

class DescribeTargetHealthRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeTargetHealthRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeTargetHealthRequest * const q);
    DescribeTargetHealthRequestPrivate(const DescribeTargetHealthRequestPrivate &other,
                                   DescribeTargetHealthRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTargetHealthRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
