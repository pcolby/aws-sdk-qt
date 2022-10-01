// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYROUTETABLERESPONSE_P_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYROUTETABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayRouteTableResponse;

class DisassociateTransitGatewayRouteTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisassociateTransitGatewayRouteTableResponsePrivate(DisassociateTransitGatewayRouteTableResponse * const q);

    void parseDisassociateTransitGatewayRouteTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTransitGatewayRouteTableResponse)
    Q_DISABLE_COPY(DisassociateTransitGatewayRouteTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
