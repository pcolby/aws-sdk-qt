// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEATTACHMENTRESPONSE_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "gettransitgatewayroutetableattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayRouteTableAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetTransitGatewayRouteTableAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetTransitGatewayRouteTableAttachmentResponse(const GetTransitGatewayRouteTableAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTransitGatewayRouteTableAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayRouteTableAttachmentResponse)
    Q_DISABLE_COPY(GetTransitGatewayRouteTableAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
