// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPV6POOLSRESPONSE_P_H
#define QTAWS_DESCRIBEIPV6POOLSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpv6PoolsResponse;

class DescribeIpv6PoolsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeIpv6PoolsResponsePrivate(DescribeIpv6PoolsResponse * const q);

    void parseDescribeIpv6PoolsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIpv6PoolsResponse)
    Q_DISABLE_COPY(DescribeIpv6PoolsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
