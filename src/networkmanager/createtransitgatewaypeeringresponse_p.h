// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPEERINGRESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYPEERINGRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class CreateTransitGatewayPeeringResponse;

class CreateTransitGatewayPeeringResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit CreateTransitGatewayPeeringResponsePrivate(CreateTransitGatewayPeeringResponse * const q);

    void parseCreateTransitGatewayPeeringResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayPeeringResponse)
    Q_DISABLE_COPY(CreateTransitGatewayPeeringResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
