// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEHEALTHREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEHEALTHREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "describeinstancehealthrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeInstanceHealthRequest;

class DescribeInstanceHealthRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DescribeInstanceHealthRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DescribeInstanceHealthRequest * const q);
    DescribeInstanceHealthRequestPrivate(const DescribeInstanceHealthRequestPrivate &other,
                                   DescribeInstanceHealthRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceHealthRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
