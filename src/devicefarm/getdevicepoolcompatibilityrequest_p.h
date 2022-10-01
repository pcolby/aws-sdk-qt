// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOOLCOMPATIBILITYREQUEST_P_H
#define QTAWS_GETDEVICEPOOLCOMPATIBILITYREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getdevicepoolcompatibilityrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDevicePoolCompatibilityRequest;

class GetDevicePoolCompatibilityRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetDevicePoolCompatibilityRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetDevicePoolCompatibilityRequest * const q);
    GetDevicePoolCompatibilityRequestPrivate(const GetDevicePoolCompatibilityRequestPrivate &other,
                                   GetDevicePoolCompatibilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDevicePoolCompatibilityRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
