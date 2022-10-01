// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICESREQUEST_P_H
#define QTAWS_LISTDEVICESREQUEST_P_H

#include "snowdevicemanagementrequest_p.h"
#include "listdevicesrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class ListDevicesRequest;

class ListDevicesRequestPrivate : public SnowDeviceManagementRequestPrivate {

public:
    ListDevicesRequestPrivate(const SnowDeviceManagementRequest::Action action,
                                   ListDevicesRequest * const q);
    ListDevicesRequestPrivate(const ListDevicesRequestPrivate &other,
                                   ListDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDevicesRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
