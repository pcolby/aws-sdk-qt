// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOREDEVICESREQUEST_P_H
#define QTAWS_LISTCOREDEVICESREQUEST_P_H

#include "greengrassv2request_p.h"
#include "listcoredevicesrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ListCoreDevicesRequest;

class ListCoreDevicesRequestPrivate : public GreengrassV2RequestPrivate {

public:
    ListCoreDevicesRequestPrivate(const GreengrassV2Request::Action action,
                                   ListCoreDevicesRequest * const q);
    ListCoreDevicesRequestPrivate(const ListCoreDevicesRequestPrivate &other,
                                   ListCoreDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCoreDevicesRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
