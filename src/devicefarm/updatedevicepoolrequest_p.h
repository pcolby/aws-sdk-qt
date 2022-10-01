// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEPOOLREQUEST_P_H
#define QTAWS_UPDATEDEVICEPOOLREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "updatedevicepoolrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateDevicePoolRequest;

class UpdateDevicePoolRequestPrivate : public DeviceFarmRequestPrivate {

public:
    UpdateDevicePoolRequestPrivate(const DeviceFarmRequest::Action action,
                                   UpdateDevicePoolRequest * const q);
    UpdateDevicePoolRequestPrivate(const UpdateDevicePoolRequestPrivate &other,
                                   UpdateDevicePoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDevicePoolRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
