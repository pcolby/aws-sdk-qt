// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLEATTACHMENTRESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLEATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "createtransitgatewayroutetableattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateTransitGatewayRouteTableAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateTransitGatewayRouteTableAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateTransitGatewayRouteTableAttachmentResponse(const CreateTransitGatewayRouteTableAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayRouteTableAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayRouteTableAttachmentResponse)
    Q_DISABLE_COPY(CreateTransitGatewayRouteTableAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
