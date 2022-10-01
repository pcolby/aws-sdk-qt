// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYROUTETABLESREQUEST_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYROUTETABLESREQUEST_P_H

#include "ec2request_p.h"
#include "describetransitgatewayroutetablesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayRouteTablesRequest;

class DescribeTransitGatewayRouteTablesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTransitGatewayRouteTablesRequestPrivate(const Ec2Request::Action action,
                                   DescribeTransitGatewayRouteTablesRequest * const q);
    DescribeTransitGatewayRouteTablesRequestPrivate(const DescribeTransitGatewayRouteTablesRequestPrivate &other,
                                   DescribeTransitGatewayRouteTablesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayRouteTablesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
