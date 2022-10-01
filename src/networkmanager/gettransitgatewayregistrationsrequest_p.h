// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYREGISTRATIONSREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYREGISTRATIONSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "gettransitgatewayregistrationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayRegistrationsRequest;

class GetTransitGatewayRegistrationsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetTransitGatewayRegistrationsRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetTransitGatewayRegistrationsRequest * const q);
    GetTransitGatewayRegistrationsRequestPrivate(const GetTransitGatewayRegistrationsRequestPrivate &other,
                                   GetTransitGatewayRegistrationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayRegistrationsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
