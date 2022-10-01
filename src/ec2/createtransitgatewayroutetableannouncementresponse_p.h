// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLEANNOUNCEMENTRESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLEANNOUNCEMENTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteTableAnnouncementResponse;

class CreateTransitGatewayRouteTableAnnouncementResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayRouteTableAnnouncementResponsePrivate(CreateTransitGatewayRouteTableAnnouncementResponse * const q);

    void parseCreateTransitGatewayRouteTableAnnouncementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayRouteTableAnnouncementResponse)
    Q_DISABLE_COPY(CreateTransitGatewayRouteTableAnnouncementResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
