// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEPROFILERESPONSE_P_H
#define QTAWS_DELETEDEVICEPROFILERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteDeviceProfileResponse;

class DeleteDeviceProfileResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteDeviceProfileResponsePrivate(DeleteDeviceProfileResponse * const q);

    void parseDeleteDeviceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceProfileResponse)
    Q_DISABLE_COPY(DeleteDeviceProfileResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
