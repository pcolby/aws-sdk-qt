// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYROUTETABLEANNOUNCEMENTSRESPONSE_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYROUTETABLEANNOUNCEMENTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayRouteTableAnnouncementsResponse;

class DescribeTransitGatewayRouteTableAnnouncementsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTransitGatewayRouteTableAnnouncementsResponsePrivate(DescribeTransitGatewayRouteTableAnnouncementsResponse * const q);

    void parseDescribeTransitGatewayRouteTableAnnouncementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayRouteTableAnnouncementsResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayRouteTableAnnouncementsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
