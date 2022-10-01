// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYCONNECTPEERRESPONSE_P_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYCONNECTPEERRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateTransitGatewayConnectPeerResponse;

class DisassociateTransitGatewayConnectPeerResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DisassociateTransitGatewayConnectPeerResponsePrivate(DisassociateTransitGatewayConnectPeerResponse * const q);

    void parseDisassociateTransitGatewayConnectPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTransitGatewayConnectPeerResponse)
    Q_DISABLE_COPY(DisassociateTransitGatewayConnectPeerResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
