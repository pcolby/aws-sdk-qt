/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETTRANSITGATEWAYCONNECTPEERASSOCIATIONSREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYCONNECTPEERASSOCIATIONSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "gettransitgatewayconnectpeerassociationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayConnectPeerAssociationsRequest;

class QTAWS_EXPORT GetTransitGatewayConnectPeerAssociationsRequestPrivate : public NetworkManagerRequestPrivate {

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
