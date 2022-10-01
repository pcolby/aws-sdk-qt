// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "describeaccountlimitsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeAccountLimitsRequest;

class DescribeAccountLimitsRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DescribeAccountLimitsRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DescribeAccountLimitsRequest * const q);
    DescribeAccountLimitsRequestPrivate(const DescribeAccountLimitsRequestPrivate &other,
                                   DescribeAccountLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountLimitsRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
