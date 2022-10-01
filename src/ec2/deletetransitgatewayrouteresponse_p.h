// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTERESPONSE_P_H
#define QTAWS_DELETETRANSITGATEWAYROUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteResponse;

class DeleteTransitGatewayRouteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTransitGatewayRouteResponsePrivate(DeleteTransitGatewayRouteResponse * const q);

    void parseDeleteTransitGatewayRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayRouteResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayRouteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
