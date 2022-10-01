// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLERESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteTableResponse;

class CreateTransitGatewayRouteTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayRouteTableResponsePrivate(CreateTransitGatewayRouteTableResponse * const q);

    void parseCreateTransitGatewayRouteTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayRouteTableResponse)
    Q_DISABLE_COPY(CreateTransitGatewayRouteTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
