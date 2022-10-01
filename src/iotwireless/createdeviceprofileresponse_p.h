// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEPROFILERESPONSE_P_H
#define QTAWS_CREATEDEVICEPROFILERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CreateDeviceProfileResponse;

class CreateDeviceProfileResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CreateDeviceProfileResponsePrivate(CreateDeviceProfileResponse * const q);

    void parseCreateDeviceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeviceProfileResponse)
    Q_DISABLE_COPY(CreateDeviceProfileResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
