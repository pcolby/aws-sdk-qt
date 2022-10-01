// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTETABLEANNOUNCEMENTRESPONSE_P_H
#define QTAWS_DELETETRANSITGATEWAYROUTETABLEANNOUNCEMENTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteTableAnnouncementResponse;

class DeleteTransitGatewayRouteTableAnnouncementResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTransitGatewayRouteTableAnnouncementResponsePrivate(DeleteTransitGatewayRouteTableAnnouncementResponse * const q);

    void parseDeleteTransitGatewayRouteTableAnnouncementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayRouteTableAnnouncementResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayRouteTableAnnouncementResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
