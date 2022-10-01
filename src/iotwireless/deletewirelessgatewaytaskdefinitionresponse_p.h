// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYTASKDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEWIRELESSGATEWAYTASKDEFINITIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayTaskDefinitionResponse;

class DeleteWirelessGatewayTaskDefinitionResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteWirelessGatewayTaskDefinitionResponsePrivate(DeleteWirelessGatewayTaskDefinitionResponse * const q);

    void parseDeleteWirelessGatewayTaskDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWirelessGatewayTaskDefinitionResponse)
    Q_DISABLE_COPY(DeleteWirelessGatewayTaskDefinitionResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
