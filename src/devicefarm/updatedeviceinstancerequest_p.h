// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEINSTANCEREQUEST_P_H
#define QTAWS_UPDATEDEVICEINSTANCEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "updatedeviceinstancerequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateDeviceInstanceRequest;

class UpdateDeviceInstanceRequestPrivate : public DeviceFarmRequestPrivate {

public:
    UpdateDeviceInstanceRequestPrivate(const DeviceFarmRequest::Action action,
                                   UpdateDeviceInstanceRequest * const q);
    UpdateDeviceInstanceRequestPrivate(const UpdateDeviceInstanceRequestPrivate &other,
                                   UpdateDeviceInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceInstanceRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
