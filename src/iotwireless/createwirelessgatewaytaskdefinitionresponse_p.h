// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYTASKDEFINITIONRESPONSE_P_H
#define QTAWS_CREATEWIRELESSGATEWAYTASKDEFINITIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayTaskDefinitionResponse;

class CreateWirelessGatewayTaskDefinitionResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CreateWirelessGatewayTaskDefinitionResponsePrivate(CreateWirelessGatewayTaskDefinitionResponse * const q);

    void parseCreateWirelessGatewayTaskDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWirelessGatewayTaskDefinitionResponse)
    Q_DISABLE_COPY(CreateWirelessGatewayTaskDefinitionResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
