// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYCONNECTPEERRESPONSE_H
#define QTAWS_ASSOCIATETRANSITGATEWAYCONNECTPEERRESPONSE_H

#include "networkmanagerresponse.h"
#include "associatetransitgatewayconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateTransitGatewayConnectPeerResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT AssociateTransitGatewayConnectPeerResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    AssociateTransitGatewayConnectPeerResponse(const AssociateTransitGatewayConnectPeerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTransitGatewayConnectPeerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTransitGatewayConnectPeerResponse)
    Q_DISABLE_COPY(AssociateTransitGatewayConnectPeerResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
