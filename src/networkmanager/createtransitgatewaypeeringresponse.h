// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPEERINGRESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYPEERINGRESPONSE_H

#include "networkmanagerresponse.h"
#include "createtransitgatewaypeeringrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateTransitGatewayPeeringResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateTransitGatewayPeeringResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateTransitGatewayPeeringResponse(const CreateTransitGatewayPeeringRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayPeeringRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayPeeringResponse)
    Q_DISABLE_COPY(CreateTransitGatewayPeeringResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
