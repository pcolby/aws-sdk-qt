// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYTASKDEFINITIONRESPONSE_P_H
#define QTAWS_GETWIRELESSGATEWAYTASKDEFINITIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayTaskDefinitionResponse;

class GetWirelessGatewayTaskDefinitionResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetWirelessGatewayTaskDefinitionResponsePrivate(GetWirelessGatewayTaskDefinitionResponse * const q);

    void parseGetWirelessGatewayTaskDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWirelessGatewayTaskDefinitionResponse)
    Q_DISABLE_COPY(GetWirelessGatewayTaskDefinitionResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
