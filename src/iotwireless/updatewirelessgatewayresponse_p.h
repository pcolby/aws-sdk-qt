// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWIRELESSGATEWAYRESPONSE_P_H
#define QTAWS_UPDATEWIRELESSGATEWAYRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class UpdateWirelessGatewayResponse;

class UpdateWirelessGatewayResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit UpdateWirelessGatewayResponsePrivate(UpdateWirelessGatewayResponse * const q);

    void parseUpdateWirelessGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWirelessGatewayResponse)
    Q_DISABLE_COPY(UpdateWirelessGatewayResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
