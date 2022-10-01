// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEINSTANCEREQUEST_P_H
#define QTAWS_GETDEVICEINSTANCEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getdeviceinstancerequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDeviceInstanceRequest;

class GetDeviceInstanceRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetDeviceInstanceRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetDeviceInstanceRequest * const q);
    GetDeviceInstanceRequestPrivate(const GetDeviceInstanceRequestPrivate &other,
                                   GetDeviceInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceInstanceRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
