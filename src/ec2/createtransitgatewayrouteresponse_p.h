// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTERESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYROUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteResponse;

class CreateTransitGatewayRouteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayRouteResponsePrivate(CreateTransitGatewayRouteResponse * const q);

    void parseCreateTransitGatewayRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayRouteResponse)
    Q_DISABLE_COPY(CreateTransitGatewayRouteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
