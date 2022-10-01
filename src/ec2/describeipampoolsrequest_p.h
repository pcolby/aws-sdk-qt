// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPAMPOOLSREQUEST_P_H
#define QTAWS_DESCRIBEIPAMPOOLSREQUEST_P_H

#include "ec2request_p.h"
#include "describeipampoolsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpamPoolsRequest;

class DescribeIpamPoolsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeIpamPoolsRequestPrivate(const Ec2Request::Action action,
                                   DescribeIpamPoolsRequest * const q);
    DescribeIpamPoolsRequestPrivate(const DescribeIpamPoolsRequestPrivate &other,
                                   DescribeIpamPoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIpamPoolsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
