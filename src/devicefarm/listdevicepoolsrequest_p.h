// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPOOLSREQUEST_P_H
#define QTAWS_LISTDEVICEPOOLSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listdevicepoolsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListDevicePoolsRequest;

class ListDevicePoolsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListDevicePoolsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListDevicePoolsRequest * const q);
    ListDevicePoolsRequestPrivate(const ListDevicePoolsRequestPrivate &other,
                                   ListDevicePoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDevicePoolsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
