// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPV6POOLSREQUEST_P_H
#define QTAWS_DESCRIBEIPV6POOLSREQUEST_P_H

#include "ec2request_p.h"
#include "describeipv6poolsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpv6PoolsRequest;

class DescribeIpv6PoolsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeIpv6PoolsRequestPrivate(const Ec2Request::Action action,
                                   DescribeIpv6PoolsRequest * const q);
    DescribeIpv6PoolsRequestPrivate(const DescribeIpv6PoolsRequestPrivate &other,
                                   DescribeIpv6PoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIpv6PoolsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
