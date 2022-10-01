// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEATTACHMENTREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "gettransitgatewayroutetableattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayRouteTableAttachmentRequest;

class GetTransitGatewayRouteTableAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetTransitGatewayRouteTableAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetTransitGatewayRouteTableAttachmentRequest * const q);
    GetTransitGatewayRouteTableAttachmentRequestPrivate(const GetTransitGatewayRouteTableAttachmentRequestPrivate &other,
                                   GetTransitGatewayRouteTableAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayRouteTableAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
