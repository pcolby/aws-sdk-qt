// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATENETWORKSITEREQUEST_P_H
#define QTAWS_ACTIVATENETWORKSITEREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "activatenetworksiterequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ActivateNetworkSiteRequest;

class ActivateNetworkSiteRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    ActivateNetworkSiteRequestPrivate(const PrivateNetworksRequest::Action action,
                                   ActivateNetworkSiteRequest * const q);
    ActivateNetworkSiteRequestPrivate(const ActivateNetworkSiteRequestPrivate &other,
                                   ActivateNetworkSiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(ActivateNetworkSiteRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
