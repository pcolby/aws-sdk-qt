// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSDEVICERESPONSE_P_H
#define QTAWS_CREATEWIRELESSDEVICERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessDeviceResponse;

class CreateWirelessDeviceResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CreateWirelessDeviceResponsePrivate(CreateWirelessDeviceResponse * const q);

    void parseCreateWirelessDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWirelessDeviceResponse)
    Q_DISABLE_COPY(CreateWirelessDeviceResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
