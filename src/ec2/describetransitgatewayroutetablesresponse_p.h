// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYROUTETABLESRESPONSE_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYROUTETABLESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayRouteTablesResponse;

class DescribeTransitGatewayRouteTablesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTransitGatewayRouteTablesResponsePrivate(DescribeTransitGatewayRouteTablesResponse * const q);

    void parseDescribeTransitGatewayRouteTablesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayRouteTablesResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayRouteTablesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
