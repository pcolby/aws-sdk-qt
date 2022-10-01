// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYCONNECTPEERASSOCIATIONSRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYCONNECTPEERASSOCIATIONSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayConnectPeerAssociationsResponse;

class GetTransitGatewayConnectPeerAssociationsResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetTransitGatewayConnectPeerAssociationsResponsePrivate(GetTransitGatewayConnectPeerAssociationsResponse * const q);

    void parseGetTransitGatewayConnectPeerAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayConnectPeerAssociationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayConnectPeerAssociationsResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
