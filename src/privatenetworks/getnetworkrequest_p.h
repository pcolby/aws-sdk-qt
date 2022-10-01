// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKREQUEST_P_H
#define QTAWS_GETNETWORKREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "getnetworkrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetNetworkRequest;

class GetNetworkRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    GetNetworkRequestPrivate(const PrivateNetworksRequest::Action action,
                                   GetNetworkRequest * const q);
    GetNetworkRequestPrivate(const GetNetworkRequestPrivate &other,
                                   GetNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
