// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPEERINGRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYPEERINGRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayPeeringResponse;

class GetTransitGatewayPeeringResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetTransitGatewayPeeringResponsePrivate(GetTransitGatewayPeeringResponse * const q);

    void parseGetTransitGatewayPeeringResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayPeeringResponse)
    Q_DISABLE_COPY(GetTransitGatewayPeeringResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
