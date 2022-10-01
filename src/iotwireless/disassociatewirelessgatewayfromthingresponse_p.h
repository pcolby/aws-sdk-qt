// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMTHINGRESPONSE_P_H
#define QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMTHINGRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessGatewayFromThingResponse;

class DisassociateWirelessGatewayFromThingResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DisassociateWirelessGatewayFromThingResponsePrivate(DisassociateWirelessGatewayFromThingResponse * const q);

    void parseDisassociateWirelessGatewayFromThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateWirelessGatewayFromThingResponse)
    Q_DISABLE_COPY(DisassociateWirelessGatewayFromThingResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
