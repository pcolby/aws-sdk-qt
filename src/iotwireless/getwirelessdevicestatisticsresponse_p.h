// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSDEVICESTATISTICSRESPONSE_P_H
#define QTAWS_GETWIRELESSDEVICESTATISTICSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessDeviceStatisticsResponse;

class GetWirelessDeviceStatisticsResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetWirelessDeviceStatisticsResponsePrivate(GetWirelessDeviceStatisticsResponse * const q);

    void parseGetWirelessDeviceStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWirelessDeviceStatisticsResponse)
    Q_DISABLE_COPY(GetWirelessDeviceStatisticsResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
