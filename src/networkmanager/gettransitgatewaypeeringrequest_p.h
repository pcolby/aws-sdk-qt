// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPEERINGREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYPEERINGREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "gettransitgatewaypeeringrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayPeeringRequest;

class GetTransitGatewayPeeringRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetTransitGatewayPeeringRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetTransitGatewayPeeringRequest * const q);
    GetTransitGatewayPeeringRequestPrivate(const GetTransitGatewayPeeringRequestPrivate &other,
                                   GetTransitGatewayPeeringRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayPeeringRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
