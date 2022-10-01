// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSREQUEST_P_H
#define QTAWS_DESCRIBETAGSREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describetagsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTagsRequest;

class DescribeTagsRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeTagsRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeTagsRequest * const q);
    DescribeTagsRequestPrivate(const DescribeTagsRequestPrivate &other,
                                   DescribeTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTagsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
