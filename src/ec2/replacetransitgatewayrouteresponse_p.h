// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACETRANSITGATEWAYROUTERESPONSE_P_H
#define QTAWS_REPLACETRANSITGATEWAYROUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ReplaceTransitGatewayRouteResponse;

class ReplaceTransitGatewayRouteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ReplaceTransitGatewayRouteResponsePrivate(ReplaceTransitGatewayRouteResponse * const q);

    void parseReplaceTransitGatewayRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReplaceTransitGatewayRouteResponse)
    Q_DISABLE_COPY(ReplaceTransitGatewayRouteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
