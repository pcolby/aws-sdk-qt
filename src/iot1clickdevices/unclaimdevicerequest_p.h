// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNCLAIMDEVICEREQUEST_P_H
#define QTAWS_UNCLAIMDEVICEREQUEST_P_H

#include "iot1clickdevicesrequest_p.h"
#include "unclaimdevicerequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class UnclaimDeviceRequest;

class UnclaimDeviceRequestPrivate : public IoT1ClickDevicesRequestPrivate {

public:
    UnclaimDeviceRequestPrivate(const IoT1ClickDevicesRequest::Action action,
                                   UnclaimDeviceRequest * const q);
    UnclaimDeviceRequestPrivate(const UnclaimDeviceRequestPrivate &other,
                                   UnclaimDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnclaimDeviceRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
