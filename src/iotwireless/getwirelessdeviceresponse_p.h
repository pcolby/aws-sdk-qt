// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSDEVICERESPONSE_P_H
#define QTAWS_GETWIRELESSDEVICERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessDeviceResponse;

class GetWirelessDeviceResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetWirelessDeviceResponsePrivate(GetWirelessDeviceResponse * const q);

    void parseGetWirelessDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWirelessDeviceResponse)
    Q_DISABLE_COPY(GetWirelessDeviceResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
