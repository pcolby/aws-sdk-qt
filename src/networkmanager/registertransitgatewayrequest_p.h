// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTRANSITGATEWAYREQUEST_P_H
#define QTAWS_REGISTERTRANSITGATEWAYREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "registertransitgatewayrequest.h"

namespace QtAws {
namespace NetworkManager {

class RegisterTransitGatewayRequest;

class RegisterTransitGatewayRequestPrivate : public NetworkManagerRequestPrivate {

public:
    RegisterTransitGatewayRequestPrivate(const NetworkManagerRequest::Action action,
                                   RegisterTransitGatewayRequest * const q);
    RegisterTransitGatewayRequestPrivate(const RegisterTransitGatewayRequestPrivate &other,
                                   RegisterTransitGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterTransitGatewayRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
