// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEEVENTSREQUEST_P_H
#define QTAWS_LISTDEVICEEVENTSREQUEST_P_H

#include "iot1clickdevicesrequest_p.h"
#include "listdeviceeventsrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class ListDeviceEventsRequest;

class ListDeviceEventsRequestPrivate : public IoT1ClickDevicesRequestPrivate {

public:
    ListDeviceEventsRequestPrivate(const IoT1ClickDevicesRequest::Action action,
                                   ListDeviceEventsRequest * const q);
    ListDeviceEventsRequestPrivate(const ListDeviceEventsRequestPrivate &other,
                                   ListDeviceEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeviceEventsRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
