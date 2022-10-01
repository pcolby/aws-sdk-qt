// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEATTACHMENTRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayRouteTableAttachmentResponse;

class GetTransitGatewayRouteTableAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetTransitGatewayRouteTableAttachmentResponsePrivate(GetTransitGatewayRouteTableAttachmentResponse * const q);

    void parseGetTransitGatewayRouteTableAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayRouteTableAttachmentResponse)
    Q_DISABLE_COPY(GetTransitGatewayRouteTableAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
