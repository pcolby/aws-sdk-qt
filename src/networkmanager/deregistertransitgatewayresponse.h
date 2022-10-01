// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYRESPONSE_H
#define QTAWS_DEREGISTERTRANSITGATEWAYRESPONSE_H

#include "networkmanagerresponse.h"
#include "deregistertransitgatewayrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeregisterTransitGatewayResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT DeregisterTransitGatewayResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    DeregisterTransitGatewayResponse(const DeregisterTransitGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterTransitGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTransitGatewayResponse)
    Q_DISABLE_COPY(DeregisterTransitGatewayResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
