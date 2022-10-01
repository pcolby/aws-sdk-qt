// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEDEVICEMETHODREQUEST_P_H
#define QTAWS_INVOKEDEVICEMETHODREQUEST_P_H

#include "iot1clickdevicesrequest_p.h"
#include "invokedevicemethodrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class InvokeDeviceMethodRequest;

class InvokeDeviceMethodRequestPrivate : public IoT1ClickDevicesRequestPrivate {

public:
    InvokeDeviceMethodRequestPrivate(const IoT1ClickDevicesRequest::Action action,
                                   InvokeDeviceMethodRequest * const q);
    InvokeDeviceMethodRequestPrivate(const InvokeDeviceMethodRequestPrivate &other,
                                   InvokeDeviceMethodRequest * const q);

private:
    Q_DECLARE_PUBLIC(InvokeDeviceMethodRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
