// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSGATEWAYTASKDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTWIRELESSGATEWAYTASKDEFINITIONSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessGatewayTaskDefinitionsResponse;

class ListWirelessGatewayTaskDefinitionsResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListWirelessGatewayTaskDefinitionsResponsePrivate(ListWirelessGatewayTaskDefinitionsResponse * const q);

    void parseListWirelessGatewayTaskDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWirelessGatewayTaskDefinitionsResponse)
    Q_DISABLE_COPY(ListWirelessGatewayTaskDefinitionsResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
