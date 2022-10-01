// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYREGISTRATIONSRESPONSE_H
#define QTAWS_GETTRANSITGATEWAYREGISTRATIONSRESPONSE_H

#include "networkmanagerresponse.h"
#include "gettransitgatewayregistrationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayRegistrationsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetTransitGatewayRegistrationsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetTransitGatewayRegistrationsResponse(const GetTransitGatewayRegistrationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTransitGatewayRegistrationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayRegistrationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayRegistrationsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
