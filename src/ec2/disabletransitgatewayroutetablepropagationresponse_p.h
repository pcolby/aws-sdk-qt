// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLETRANSITGATEWAYROUTETABLEPROPAGATIONRESPONSE_P_H
#define QTAWS_DISABLETRANSITGATEWAYROUTETABLEPROPAGATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisableTransitGatewayRouteTablePropagationResponse;

class DisableTransitGatewayRouteTablePropagationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisableTransitGatewayRouteTablePropagationResponsePrivate(DisableTransitGatewayRouteTablePropagationResponse * const q);

    void parseDisableTransitGatewayRouteTablePropagationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableTransitGatewayRouteTablePropagationResponse)
    Q_DISABLE_COPY(DisableTransitGatewayRouteTablePropagationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
