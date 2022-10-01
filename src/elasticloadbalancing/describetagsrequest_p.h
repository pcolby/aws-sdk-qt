// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSREQUEST_P_H
#define QTAWS_DESCRIBETAGSREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "describetagsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeTagsRequest;

class DescribeTagsRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DescribeTagsRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DescribeTagsRequest * const q);
    DescribeTagsRequestPrivate(const DescribeTagsRequestPrivate &other,
                                   DescribeTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTagsRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
