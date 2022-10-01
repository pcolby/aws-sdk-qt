// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYRESPONSE_P_H
#define QTAWS_DEREGISTERTRANSITGATEWAYRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DeregisterTransitGatewayResponse;

class DeregisterTransitGatewayResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DeregisterTransitGatewayResponsePrivate(DeregisterTransitGatewayResponse * const q);

    void parseDeregisterTransitGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterTransitGatewayResponse)
    Q_DISABLE_COPY(DeregisterTransitGatewayResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
