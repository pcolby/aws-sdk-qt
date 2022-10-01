// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPEERINGREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYPEERINGREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createtransitgatewaypeeringrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateTransitGatewayPeeringRequest;

class CreateTransitGatewayPeeringRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateTransitGatewayPeeringRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateTransitGatewayPeeringRequest * const q);
    CreateTransitGatewayPeeringRequestPrivate(const CreateTransitGatewayPeeringRequestPrivate &other,
                                   CreateTransitGatewayPeeringRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayPeeringRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
