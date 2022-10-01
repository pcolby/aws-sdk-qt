// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTRANSITGATEWAYRESPONSE_P_H
#define QTAWS_REGISTERTRANSITGATEWAYRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class RegisterTransitGatewayResponse;

class RegisterTransitGatewayResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit RegisterTransitGatewayResponsePrivate(RegisterTransitGatewayResponse * const q);

    void parseRegisterTransitGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterTransitGatewayResponse)
    Q_DISABLE_COPY(RegisterTransitGatewayResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
