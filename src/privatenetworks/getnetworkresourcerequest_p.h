// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCEREQUEST_P_H
#define QTAWS_GETNETWORKRESOURCEREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "getnetworkresourcerequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetNetworkResourceRequest;

class GetNetworkResourceRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    GetNetworkResourceRequestPrivate(const PrivateNetworksRequest::Action action,
                                   GetNetworkResourceRequest * const q);
    GetNetworkResourceRequestPrivate(const GetNetworkResourceRequestPrivate &other,
                                   GetNetworkResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkResourceRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
