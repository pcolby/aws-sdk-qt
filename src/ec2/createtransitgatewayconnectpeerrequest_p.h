// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYCONNECTPEERREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYCONNECTPEERREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewayconnectpeerrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayConnectPeerRequest;

class CreateTransitGatewayConnectPeerRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayConnectPeerRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayConnectPeerRequest * const q);
    CreateTransitGatewayConnectPeerRequestPrivate(const CreateTransitGatewayConnectPeerRequestPrivate &other,
                                   CreateTransitGatewayConnectPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayConnectPeerRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
