// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLICIPV4POOLSRESPONSE_P_H
#define QTAWS_DESCRIBEPUBLICIPV4POOLSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribePublicIpv4PoolsResponse;

class DescribePublicIpv4PoolsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribePublicIpv4PoolsResponsePrivate(DescribePublicIpv4PoolsResponse * const q);

    void parseDescribePublicIpv4PoolsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePublicIpv4PoolsResponse)
    Q_DISABLE_COPY(DescribePublicIpv4PoolsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
