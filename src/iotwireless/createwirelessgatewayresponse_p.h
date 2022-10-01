// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYRESPONSE_P_H
#define QTAWS_CREATEWIRELESSGATEWAYRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayResponse;

class CreateWirelessGatewayResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CreateWirelessGatewayResponsePrivate(CreateWirelessGatewayResponse * const q);

    void parseCreateWirelessGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWirelessGatewayResponse)
    Q_DISABLE_COPY(CreateWirelessGatewayResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
