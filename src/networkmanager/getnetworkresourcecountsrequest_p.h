// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCECOUNTSREQUEST_P_H
#define QTAWS_GETNETWORKRESOURCECOUNTSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getnetworkresourcecountsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkResourceCountsRequest;

class GetNetworkResourceCountsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetNetworkResourceCountsRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetNetworkResourceCountsRequest * const q);
    GetNetworkResourceCountsRequestPrivate(const GetNetworkResourceCountsRequestPrivate &other,
                                   GetNetworkResourceCountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkResourceCountsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
