// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYRESPONSE_P_H
#define QTAWS_DELETEWIRELESSGATEWAYRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayResponse;

class DeleteWirelessGatewayResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteWirelessGatewayResponsePrivate(DeleteWirelessGatewayResponse * const q);

    void parseDeleteWirelessGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWirelessGatewayResponse)
    Q_DISABLE_COPY(DeleteWirelessGatewayResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
