// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYCONNECTPEERASSOCIATIONSREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYCONNECTPEERASSOCIATIONSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "gettransitgatewayconnectpeerassociationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayConnectPeerAssociationsRequest;

class GetTransitGatewayConnectPeerAssociationsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetTransitGatewayConnectPeerAssociationsRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetTransitGatewayConnectPeerAssociationsRequest * const q);
    GetTransitGatewayConnectPeerAssociationsRequestPrivate(const GetTransitGatewayConnectPeerAssociationsRequestPrivate &other,
                                   GetTransitGatewayConnectPeerAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayConnectPeerAssociationsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
