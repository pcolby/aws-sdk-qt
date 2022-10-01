// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPROFILESRESPONSE_P_H
#define QTAWS_LISTDEVICEPROFILESRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListDeviceProfilesResponse;

class ListDeviceProfilesResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListDeviceProfilesResponsePrivate(ListDeviceProfilesResponse * const q);

    void parseListDeviceProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeviceProfilesResponse)
    Q_DISABLE_COPY(ListDeviceProfilesResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
