// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEMETHODSREQUEST_P_H
#define QTAWS_GETDEVICEMETHODSREQUEST_P_H

#include "iot1clickdevicesrequest_p.h"
#include "getdevicemethodsrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class GetDeviceMethodsRequest;

class GetDeviceMethodsRequestPrivate : public IoT1ClickDevicesRequestPrivate {

public:
    GetDeviceMethodsRequestPrivate(const IoT1ClickDevicesRequest::Action action,
                                   GetDeviceMethodsRequest * const q);
    GetDeviceMethodsRequestPrivate(const GetDeviceMethodsRequestPrivate &other,
                                   GetDeviceMethodsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceMethodsRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
