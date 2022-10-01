// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYCONNECTPEERREQUEST_P_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYCONNECTPEERREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "disassociatetransitgatewayconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateTransitGatewayConnectPeerRequest;

class DisassociateTransitGatewayConnectPeerRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DisassociateTransitGatewayConnectPeerRequestPrivate(const NetworkManagerRequest::Action action,
                                   DisassociateTransitGatewayConnectPeerRequest * const q);
    DisassociateTransitGatewayConnectPeerRequestPrivate(const DisassociateTransitGatewayConnectPeerRequestPrivate &other,
                                   DisassociateTransitGatewayConnectPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTransitGatewayConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
