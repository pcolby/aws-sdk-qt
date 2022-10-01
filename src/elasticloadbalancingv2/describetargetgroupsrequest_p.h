// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBETARGETGROUPSREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describetargetgroupsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetGroupsRequest;

class DescribeTargetGroupsRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeTargetGroupsRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeTargetGroupsRequest * const q);
    DescribeTargetGroupsRequestPrivate(const DescribeTargetGroupsRequestPrivate &other,
                                   DescribeTargetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTargetGroupsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
