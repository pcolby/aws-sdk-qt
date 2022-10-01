// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETGROUPATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBETARGETGROUPATTRIBUTESREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describetargetgroupattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetGroupAttributesRequest;

class DescribeTargetGroupAttributesRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeTargetGroupAttributesRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeTargetGroupAttributesRequest * const q);
    DescribeTargetGroupAttributesRequestPrivate(const DescribeTargetGroupAttributesRequestPrivate &other,
                                   DescribeTargetGroupAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTargetGroupAttributesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
