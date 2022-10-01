// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYROUTETABLERESPONSE_P_H
#define QTAWS_ASSOCIATETRANSITGATEWAYROUTETABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayRouteTableResponse;

class AssociateTransitGatewayRouteTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateTransitGatewayRouteTableResponsePrivate(AssociateTransitGatewayRouteTableResponse * const q);

    void parseAssociateTransitGatewayRouteTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTransitGatewayRouteTableResponse)
    Q_DISABLE_COPY(AssociateTransitGatewayRouteTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
