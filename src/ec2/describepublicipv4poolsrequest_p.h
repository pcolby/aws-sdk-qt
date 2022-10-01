// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLICIPV4POOLSREQUEST_P_H
#define QTAWS_DESCRIBEPUBLICIPV4POOLSREQUEST_P_H

#include "ec2request_p.h"
#include "describepublicipv4poolsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribePublicIpv4PoolsRequest;

class DescribePublicIpv4PoolsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribePublicIpv4PoolsRequestPrivate(const Ec2Request::Action action,
                                   DescribePublicIpv4PoolsRequest * const q);
    DescribePublicIpv4PoolsRequestPrivate(const DescribePublicIpv4PoolsRequestPrivate &other,
                                   DescribePublicIpv4PoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePublicIpv4PoolsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
