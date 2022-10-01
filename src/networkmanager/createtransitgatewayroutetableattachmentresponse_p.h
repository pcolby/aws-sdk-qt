// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLEATTACHMENTRESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLEATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class CreateTransitGatewayRouteTableAttachmentResponse;

class CreateTransitGatewayRouteTableAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit CreateTransitGatewayRouteTableAttachmentResponsePrivate(CreateTransitGatewayRouteTableAttachmentResponse * const q);

    void parseCreateTransitGatewayRouteTableAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayRouteTableAttachmentResponse)
    Q_DISABLE_COPY(CreateTransitGatewayRouteTableAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
