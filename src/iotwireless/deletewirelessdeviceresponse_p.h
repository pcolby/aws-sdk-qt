// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSDEVICERESPONSE_P_H
#define QTAWS_DELETEWIRELESSDEVICERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessDeviceResponse;

class DeleteWirelessDeviceResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteWirelessDeviceResponsePrivate(DeleteWirelessDeviceResponse * const q);

    void parseDeleteWirelessDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWirelessDeviceResponse)
    Q_DISABLE_COPY(DeleteWirelessDeviceResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
