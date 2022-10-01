// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKRESOURCESREQUEST_P_H
#define QTAWS_LISTNETWORKRESOURCESREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "listnetworkresourcesrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListNetworkResourcesRequest;

class ListNetworkResourcesRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    ListNetworkResourcesRequestPrivate(const PrivateNetworksRequest::Action action,
                                   ListNetworkResourcesRequest * const q);
    ListNetworkResourcesRequestPrivate(const ListNetworkResourcesRequestPrivate &other,
                                   ListNetworkResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNetworkResourcesRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
