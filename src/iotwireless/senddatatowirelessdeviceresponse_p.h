// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDATATOWIRELESSDEVICERESPONSE_P_H
#define QTAWS_SENDDATATOWIRELESSDEVICERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class SendDataToWirelessDeviceResponse;

class SendDataToWirelessDeviceResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit SendDataToWirelessDeviceResponsePrivate(SendDataToWirelessDeviceResponse * const q);

    void parseSendDataToWirelessDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendDataToWirelessDeviceResponse)
    Q_DISABLE_COPY(SendDataToWirelessDeviceResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
