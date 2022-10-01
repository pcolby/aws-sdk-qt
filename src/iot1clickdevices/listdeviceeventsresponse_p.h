// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEEVENTSRESPONSE_P_H
#define QTAWS_LISTDEVICEEVENTSRESPONSE_P_H

#include "iot1clickdevicesresponse_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

class ListDeviceEventsResponse;

class ListDeviceEventsResponsePrivate : public IoT1ClickDevicesResponsePrivate {

public:

    explicit ListDeviceEventsResponsePrivate(ListDeviceEventsResponse * const q);

    void parseListDeviceEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeviceEventsResponse)
    Q_DISABLE_COPY(ListDeviceEventsResponsePrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
