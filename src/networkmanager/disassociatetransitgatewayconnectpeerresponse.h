// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYCONNECTPEERRESPONSE_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYCONNECTPEERRESPONSE_H

#include "networkmanagerresponse.h"
#include "disassociatetransitgatewayconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateTransitGatewayConnectPeerResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DisassociateTransitGatewayConnectPeerResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DisassociateTransitGatewayConnectPeerResponse(const DisassociateTransitGatewayConnectPeerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTransitGatewayConnectPeerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTransitGatewayConnectPeerResponse)
    Q_DISABLE_COPY(DisassociateTransitGatewayConnectPeerResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
