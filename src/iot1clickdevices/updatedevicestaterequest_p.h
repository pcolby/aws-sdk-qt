// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESTATEREQUEST_P_H
#define QTAWS_UPDATEDEVICESTATEREQUEST_P_H

#include "iot1clickdevicesrequest_p.h"
#include "updatedevicestaterequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class UpdateDeviceStateRequest;

class UpdateDeviceStateRequestPrivate : public IoT1ClickDevicesRequestPrivate {

public:
    UpdateDeviceStateRequestPrivate(const IoT1ClickDevicesRequest::Action action,
                                   UpdateDeviceStateRequest * const q);
    UpdateDeviceStateRequestPrivate(const UpdateDeviceStateRequestPrivate &other,
                                   UpdateDeviceStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceStateRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
