// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYREGISTRATIONSRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYREGISTRATIONSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayRegistrationsResponse;

class GetTransitGatewayRegistrationsResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetTransitGatewayRegistrationsResponsePrivate(GetTransitGatewayRegistrationsResponse * const q);

    void parseGetTransitGatewayRegistrationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayRegistrationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayRegistrationsResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
