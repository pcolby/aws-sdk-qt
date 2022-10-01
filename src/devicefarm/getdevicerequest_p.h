// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEREQUEST_P_H
#define QTAWS_GETDEVICEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getdevicerequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDeviceRequest;

class GetDeviceRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetDeviceRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetDeviceRequest * const q);
    GetDeviceRequestPrivate(const GetDeviceRequestPrivate &other,
                                   GetDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
