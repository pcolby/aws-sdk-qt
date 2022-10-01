// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYCONNECTPEERASSOCIATIONSRESPONSE_H
#define QTAWS_GETTRANSITGATEWAYCONNECTPEERASSOCIATIONSRESPONSE_H

#include "networkmanagerresponse.h"
#include "gettransitgatewayconnectpeerassociationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayConnectPeerAssociationsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetTransitGatewayConnectPeerAssociationsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetTransitGatewayConnectPeerAssociationsResponse(const GetTransitGatewayConnectPeerAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTransitGatewayConnectPeerAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayConnectPeerAssociationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayConnectPeerAssociationsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
