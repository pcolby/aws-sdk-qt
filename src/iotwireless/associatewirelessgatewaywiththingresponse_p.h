// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSGATEWAYWITHTHINGRESPONSE_P_H
#define QTAWS_ASSOCIATEWIRELESSGATEWAYWITHTHINGRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessGatewayWithThingResponse;

class AssociateWirelessGatewayWithThingResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit AssociateWirelessGatewayWithThingResponsePrivate(AssociateWirelessGatewayWithThingResponse * const q);

    void parseAssociateWirelessGatewayWithThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateWirelessGatewayWithThingResponse)
    Q_DISABLE_COPY(AssociateWirelessGatewayWithThingResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
