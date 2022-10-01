// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNCLAIMDEVICERESPONSE_P_H
#define QTAWS_UNCLAIMDEVICERESPONSE_P_H

#include "iot1clickdevicesresponse_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

class UnclaimDeviceResponse;

class UnclaimDeviceResponsePrivate : public IoT1ClickDevicesResponsePrivate {

public:

    explicit UnclaimDeviceResponsePrivate(UnclaimDeviceResponse * const q);

    void parseUnclaimDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnclaimDeviceResponse)
    Q_DISABLE_COPY(UnclaimDeviceResponsePrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
