// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCESREQUEST_P_H
#define QTAWS_GETNETWORKRESOURCESREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getnetworkresourcesrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkResourcesRequest;

class GetNetworkResourcesRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetNetworkResourcesRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetNetworkResourcesRequest * const q);
    GetNetworkResourcesRequestPrivate(const GetNetworkResourcesRequestPrivate &other,
                                   GetNetworkResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkResourcesRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
