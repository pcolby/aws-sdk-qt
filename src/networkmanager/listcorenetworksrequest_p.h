// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCORENETWORKSREQUEST_P_H
#define QTAWS_LISTCORENETWORKSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "listcorenetworksrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListCoreNetworksRequest;

class ListCoreNetworksRequestPrivate : public NetworkManagerRequestPrivate {

public:
    ListCoreNetworksRequestPrivate(const NetworkManagerRequest::Action action,
                                   ListCoreNetworksRequest * const q);
    ListCoreNetworksRequestPrivate(const ListCoreNetworksRequestPrivate &other,
                                   ListCoreNetworksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCoreNetworksRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
