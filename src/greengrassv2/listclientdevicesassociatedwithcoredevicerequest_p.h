// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLIENTDEVICESASSOCIATEDWITHCOREDEVICEREQUEST_P_H
#define QTAWS_LISTCLIENTDEVICESASSOCIATEDWITHCOREDEVICEREQUEST_P_H

#include "greengrassv2request_p.h"
#include "listclientdevicesassociatedwithcoredevicerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ListClientDevicesAssociatedWithCoreDeviceRequest;

class ListClientDevicesAssociatedWithCoreDeviceRequestPrivate : public GreengrassV2RequestPrivate {

public:
    ListClientDevicesAssociatedWithCoreDeviceRequestPrivate(const GreengrassV2Request::Action action,
                                   ListClientDevicesAssociatedWithCoreDeviceRequest * const q);
    ListClientDevicesAssociatedWithCoreDeviceRequestPrivate(const ListClientDevicesAssociatedWithCoreDeviceRequestPrivate &other,
                                   ListClientDevicesAssociatedWithCoreDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListClientDevicesAssociatedWithCoreDeviceRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
