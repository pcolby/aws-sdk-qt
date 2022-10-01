// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTPEERSREQUEST_P_H
#define QTAWS_LISTCONNECTPEERSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "listconnectpeersrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListConnectPeersRequest;

class ListConnectPeersRequestPrivate : public NetworkManagerRequestPrivate {

public:
    ListConnectPeersRequestPrivate(const NetworkManagerRequest::Action action,
                                   ListConnectPeersRequest * const q);
    ListConnectPeersRequestPrivate(const ListConnectPeersRequestPrivate &other,
                                   ListConnectPeersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConnectPeersRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
