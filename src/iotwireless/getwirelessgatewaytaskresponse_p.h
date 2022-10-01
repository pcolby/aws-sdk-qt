// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYTASKRESPONSE_P_H
#define QTAWS_GETWIRELESSGATEWAYTASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayTaskResponse;

class GetWirelessGatewayTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetWirelessGatewayTaskResponsePrivate(GetWirelessGatewayTaskResponse * const q);

    void parseGetWirelessGatewayTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWirelessGatewayTaskResponse)
    Q_DISABLE_COPY(GetWirelessGatewayTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
