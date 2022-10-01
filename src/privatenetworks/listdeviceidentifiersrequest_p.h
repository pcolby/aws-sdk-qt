// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEIDENTIFIERSREQUEST_P_H
#define QTAWS_LISTDEVICEIDENTIFIERSREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "listdeviceidentifiersrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListDeviceIdentifiersRequest;

class ListDeviceIdentifiersRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    ListDeviceIdentifiersRequestPrivate(const PrivateNetworksRequest::Action action,
                                   ListDeviceIdentifiersRequest * const q);
    ListDeviceIdentifiersRequestPrivate(const ListDeviceIdentifiersRequestPrivate &other,
                                   ListDeviceIdentifiersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeviceIdentifiersRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
