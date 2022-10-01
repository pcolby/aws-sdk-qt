// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYREQUEST_P_H
#define QTAWS_DEREGISTERTRANSITGATEWAYREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "deregistertransitgatewayrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeregisterTransitGatewayRequest;

class DeregisterTransitGatewayRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DeregisterTransitGatewayRequestPrivate(const NetworkManagerRequest::Action action,
                                   DeregisterTransitGatewayRequest * const q);
    DeregisterTransitGatewayRequestPrivate(const DeregisterTransitGatewayRequestPrivate &other,
                                   DeregisterTransitGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterTransitGatewayRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
