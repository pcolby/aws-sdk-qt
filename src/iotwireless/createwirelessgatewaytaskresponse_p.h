// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYTASKRESPONSE_P_H
#define QTAWS_CREATEWIRELESSGATEWAYTASKRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayTaskResponse;

class CreateWirelessGatewayTaskResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CreateWirelessGatewayTaskResponsePrivate(CreateWirelessGatewayTaskResponse * const q);

    void parseCreateWirelessGatewayTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWirelessGatewayTaskResponse)
    Q_DISABLE_COPY(CreateWirelessGatewayTaskResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
