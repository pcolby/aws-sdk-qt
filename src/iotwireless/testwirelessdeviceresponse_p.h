// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTWIRELESSDEVICERESPONSE_P_H
#define QTAWS_TESTWIRELESSDEVICERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class TestWirelessDeviceResponse;

class TestWirelessDeviceResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit TestWirelessDeviceResponsePrivate(TestWirelessDeviceResponse * const q);

    void parseTestWirelessDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestWirelessDeviceResponse)
    Q_DISABLE_COPY(TestWirelessDeviceResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
