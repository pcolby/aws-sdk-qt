// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPROFILERESPONSE_P_H
#define QTAWS_GETDEVICEPROFILERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetDeviceProfileResponse;

class GetDeviceProfileResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetDeviceProfileResponsePrivate(GetDeviceProfileResponse * const q);

    void parseGetDeviceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeviceProfileResponse)
    Q_DISABLE_COPY(GetDeviceProfileResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
