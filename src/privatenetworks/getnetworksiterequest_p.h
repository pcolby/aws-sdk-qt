// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKSITEREQUEST_P_H
#define QTAWS_GETNETWORKSITEREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "getnetworksiterequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetNetworkSiteRequest;

class GetNetworkSiteRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    GetNetworkSiteRequestPrivate(const PrivateNetworksRequest::Action action,
                                   GetNetworkSiteRequest * const q);
    GetNetworkSiteRequestPrivate(const GetNetworkSiteRequestPrivate &other,
                                   GetNetworkSiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkSiteRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
