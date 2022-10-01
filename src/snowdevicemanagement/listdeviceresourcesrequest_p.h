// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICERESOURCESREQUEST_P_H
#define QTAWS_LISTDEVICERESOURCESREQUEST_P_H

#include "snowdevicemanagementrequest_p.h"
#include "listdeviceresourcesrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class ListDeviceResourcesRequest;

class ListDeviceResourcesRequestPrivate : public SnowDeviceManagementRequestPrivate {

public:
    ListDeviceResourcesRequestPrivate(const SnowDeviceManagementRequest::Action action,
                                   ListDeviceResourcesRequest * const q);
    ListDeviceResourcesRequestPrivate(const ListDeviceResourcesRequestPrivate &other,
                                   ListDeviceResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeviceResourcesRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
