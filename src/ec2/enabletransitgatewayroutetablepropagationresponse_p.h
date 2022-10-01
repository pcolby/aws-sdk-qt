// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETRANSITGATEWAYROUTETABLEPROPAGATIONRESPONSE_P_H
#define QTAWS_ENABLETRANSITGATEWAYROUTETABLEPROPAGATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableTransitGatewayRouteTablePropagationResponse;

class EnableTransitGatewayRouteTablePropagationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableTransitGatewayRouteTablePropagationResponsePrivate(EnableTransitGatewayRouteTablePropagationResponse * const q);

    void parseEnableTransitGatewayRouteTablePropagationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableTransitGatewayRouteTablePropagationResponse)
    Q_DISABLE_COPY(EnableTransitGatewayRouteTablePropagationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
