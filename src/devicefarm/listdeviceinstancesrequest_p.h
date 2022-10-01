// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEINSTANCESREQUEST_P_H
#define QTAWS_LISTDEVICEINSTANCESREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listdeviceinstancesrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListDeviceInstancesRequest;

class ListDeviceInstancesRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListDeviceInstancesRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListDeviceInstancesRequest * const q);
    ListDeviceInstancesRequestPrivate(const ListDeviceInstancesRequestPrivate &other,
                                   ListDeviceInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeviceInstancesRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
