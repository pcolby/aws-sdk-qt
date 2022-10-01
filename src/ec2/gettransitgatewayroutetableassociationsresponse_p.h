// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEASSOCIATIONSRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEASSOCIATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayRouteTableAssociationsResponse;

class GetTransitGatewayRouteTableAssociationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetTransitGatewayRouteTableAssociationsResponsePrivate(GetTransitGatewayRouteTableAssociationsResponse * const q);

    void parseGetTransitGatewayRouteTableAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayRouteTableAssociationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayRouteTableAssociationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
