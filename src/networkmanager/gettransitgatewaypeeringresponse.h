// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPEERINGRESPONSE_H
#define QTAWS_GETTRANSITGATEWAYPEERINGRESPONSE_H

#include "networkmanagerresponse.h"
#include "gettransitgatewaypeeringrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayPeeringResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetTransitGatewayPeeringResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetTransitGatewayPeeringResponse(const GetTransitGatewayPeeringRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTransitGatewayPeeringRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayPeeringResponse)
    Q_DISABLE_COPY(GetTransitGatewayPeeringResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
