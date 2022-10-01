// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEPROPAGATIONSRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEPROPAGATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayRouteTablePropagationsResponse;

class GetTransitGatewayRouteTablePropagationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetTransitGatewayRouteTablePropagationsResponsePrivate(GetTransitGatewayRouteTablePropagationsResponse * const q);

    void parseGetTransitGatewayRouteTablePropagationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayRouteTablePropagationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayRouteTablePropagationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
