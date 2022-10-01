// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESTATERESPONSE_P_H
#define QTAWS_UPDATEDEVICESTATERESPONSE_P_H

#include "iot1clickdevicesresponse_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

class UpdateDeviceStateResponse;

class UpdateDeviceStateResponsePrivate : public IoT1ClickDevicesResponsePrivate {

public:

    explicit UpdateDeviceStateResponsePrivate(UpdateDeviceStateResponse * const q);

    void parseUpdateDeviceStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceStateResponse)
    Q_DISABLE_COPY(UpdateDeviceStateResponsePrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
