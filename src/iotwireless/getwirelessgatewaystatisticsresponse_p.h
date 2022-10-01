// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYSTATISTICSRESPONSE_P_H
#define QTAWS_GETWIRELESSGATEWAYSTATISTICSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayStatisticsResponse;

class GetWirelessGatewayStatisticsResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetWirelessGatewayStatisticsResponsePrivate(GetWirelessGatewayStatisticsResponse * const q);

    void parseGetWirelessGatewayStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWirelessGatewayStatisticsResponse)
    Q_DISABLE_COPY(GetWirelessGatewayStatisticsResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
