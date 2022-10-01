// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSITESREQUEST_P_H
#define QTAWS_LISTNETWORKSITESREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "listnetworksitesrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListNetworkSitesRequest;

class ListNetworkSitesRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    ListNetworkSitesRequestPrivate(const PrivateNetworksRequest::Action action,
                                   ListNetworkSitesRequest * const q);
    ListNetworkSitesRequestPrivate(const ListNetworkSitesRequestPrivate &other,
                                   ListNetworkSitesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNetworkSitesRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
