// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTRANSITGATEWAYRESPONSE_H
#define QTAWS_REGISTERTRANSITGATEWAYRESPONSE_H

#include "networkmanagerresponse.h"
#include "registertransitgatewayrequest.h"

namespace QtAws {
namespace NetworkManager {

class RegisterTransitGatewayResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT RegisterTransitGatewayResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    RegisterTransitGatewayResponse(const RegisterTransitGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterTransitGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTransitGatewayResponse)
    Q_DISABLE_COPY(RegisterTransitGatewayResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
