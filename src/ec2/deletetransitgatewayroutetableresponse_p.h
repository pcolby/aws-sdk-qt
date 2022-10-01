// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTETABLERESPONSE_P_H
#define QTAWS_DELETETRANSITGATEWAYROUTETABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteTableResponse;

class DeleteTransitGatewayRouteTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTransitGatewayRouteTableResponsePrivate(DeleteTransitGatewayRouteTableResponse * const q);

    void parseDeleteTransitGatewayRouteTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayRouteTableResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayRouteTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
