// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLEATTACHMENTREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLEATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createtransitgatewayroutetableattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateTransitGatewayRouteTableAttachmentRequest;

class CreateTransitGatewayRouteTableAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateTransitGatewayRouteTableAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateTransitGatewayRouteTableAttachmentRequest * const q);
    CreateTransitGatewayRouteTableAttachmentRequestPrivate(const CreateTransitGatewayRouteTableAttachmentRequestPrivate &other,
                                   CreateTransitGatewayRouteTableAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayRouteTableAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
