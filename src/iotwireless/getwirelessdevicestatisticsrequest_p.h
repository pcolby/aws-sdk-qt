// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSDEVICESTATISTICSREQUEST_P_H
#define QTAWS_GETWIRELESSDEVICESTATISTICSREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getwirelessdevicestatisticsrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessDeviceStatisticsRequest;

class GetWirelessDeviceStatisticsRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetWirelessDeviceStatisticsRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetWirelessDeviceStatisticsRequest * const q);
    GetWirelessDeviceStatisticsRequestPrivate(const GetWirelessDeviceStatisticsRequestPrivate &other,
                                   GetWirelessDeviceStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWirelessDeviceStatisticsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
