// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOOLREQUEST_P_H
#define QTAWS_GETDEVICEPOOLREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getdevicepoolrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetDevicePoolRequest;

class GetDevicePoolRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetDevicePoolRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetDevicePoolRequest * const q);
    GetDevicePoolRequestPrivate(const GetDevicePoolRequestPrivate &other,
                                   GetDevicePoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDevicePoolRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
