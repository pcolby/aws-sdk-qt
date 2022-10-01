// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEPOOLREQUEST_P_H
#define QTAWS_CREATEDEVICEPOOLREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "createdevicepoolrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateDevicePoolRequest;

class CreateDevicePoolRequestPrivate : public DeviceFarmRequestPrivate {

public:
    CreateDevicePoolRequestPrivate(const DeviceFarmRequest::Action action,
                                   CreateDevicePoolRequest * const q);
    CreateDevicePoolRequestPrivate(const CreateDevicePoolRequestPrivate &other,
                                   CreateDevicePoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDevicePoolRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
