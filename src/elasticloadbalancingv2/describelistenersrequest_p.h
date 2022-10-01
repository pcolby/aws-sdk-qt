// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERSREQUEST_P_H
#define QTAWS_DESCRIBELISTENERSREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describelistenersrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeListenersRequest;

class DescribeListenersRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeListenersRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeListenersRequest * const q);
    DescribeListenersRequestPrivate(const DescribeListenersRequestPrivate &other,
                                   DescribeListenersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeListenersRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
