// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYRESPONSE_P_H
#define QTAWS_GETWIRELESSGATEWAYRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayResponse;

class GetWirelessGatewayResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetWirelessGatewayResponsePrivate(GetWirelessGatewayResponse * const q);

    void parseGetWirelessGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWirelessGatewayResponse)
    Q_DISABLE_COPY(GetWirelessGatewayResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
