// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYCONNECTPEERREQUEST_P_H
#define QTAWS_DELETETRANSITGATEWAYCONNECTPEERREQUEST_P_H

#include "ec2request_p.h"
#include "deletetransitgatewayconnectpeerrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayConnectPeerRequest;

class DeleteTransitGatewayConnectPeerRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTransitGatewayConnectPeerRequestPrivate(const Ec2Request::Action action,
                                   DeleteTransitGatewayConnectPeerRequest * const q);
    DeleteTransitGatewayConnectPeerRequestPrivate(const DeleteTransitGatewayConnectPeerRequestPrivate &other,
                                   DeleteTransitGatewayConnectPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayConnectPeerRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
