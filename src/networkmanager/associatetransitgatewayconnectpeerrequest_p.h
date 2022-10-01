// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYCONNECTPEERREQUEST_P_H
#define QTAWS_ASSOCIATETRANSITGATEWAYCONNECTPEERREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "associatetransitgatewayconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateTransitGatewayConnectPeerRequest;

class AssociateTransitGatewayConnectPeerRequestPrivate : public NetworkManagerRequestPrivate {

public:
    AssociateTransitGatewayConnectPeerRequestPrivate(const NetworkManagerRequest::Action action,
                                   AssociateTransitGatewayConnectPeerRequest * const q);
    AssociateTransitGatewayConnectPeerRequestPrivate(const AssociateTransitGatewayConnectPeerRequestPrivate &other,
                                   AssociateTransitGatewayConnectPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTransitGatewayConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
