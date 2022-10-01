// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCORENETWORKPOLICYVERSIONSREQUEST_P_H
#define QTAWS_LISTCORENETWORKPOLICYVERSIONSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "listcorenetworkpolicyversionsrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListCoreNetworkPolicyVersionsRequest;

class ListCoreNetworkPolicyVersionsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    ListCoreNetworkPolicyVersionsRequestPrivate(const NetworkManagerRequest::Action action,
                                   ListCoreNetworkPolicyVersionsRequest * const q);
    ListCoreNetworkPolicyVersionsRequestPrivate(const ListCoreNetworkPolicyVersionsRequestPrivate &other,
                                   ListCoreNetworkPolicyVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCoreNetworkPolicyVersionsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
