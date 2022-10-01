// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYCONNECTPEERRESPONSE_P_H
#define QTAWS_ASSOCIATETRANSITGATEWAYCONNECTPEERRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class AssociateTransitGatewayConnectPeerResponse;

class AssociateTransitGatewayConnectPeerResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit AssociateTransitGatewayConnectPeerResponsePrivate(AssociateTransitGatewayConnectPeerResponse * const q);

    void parseAssociateTransitGatewayConnectPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTransitGatewayConnectPeerResponse)
    Q_DISABLE_COPY(AssociateTransitGatewayConnectPeerResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
