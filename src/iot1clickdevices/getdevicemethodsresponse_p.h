// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEMETHODSRESPONSE_P_H
#define QTAWS_GETDEVICEMETHODSRESPONSE_P_H

#include "iot1clickdevicesresponse_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

class GetDeviceMethodsResponse;

class GetDeviceMethodsResponsePrivate : public IoT1ClickDevicesResponsePrivate {

public:

    explicit GetDeviceMethodsResponsePrivate(GetDeviceMethodsResponse * const q);

    void parseGetDeviceMethodsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeviceMethodsResponse)
    Q_DISABLE_COPY(GetDeviceMethodsResponsePrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
