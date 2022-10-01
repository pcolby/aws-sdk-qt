// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSITEREQUEST_P_H
#define QTAWS_UPDATENETWORKSITEREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "updatenetworksiterequest.h"

namespace QtAws {
namespace PrivateNetworks {

class UpdateNetworkSiteRequest;

class UpdateNetworkSiteRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    UpdateNetworkSiteRequestPrivate(const PrivateNetworksRequest::Action action,
                                   UpdateNetworkSiteRequest * const q);
    UpdateNetworkSiteRequestPrivate(const UpdateNetworkSiteRequestPrivate &other,
                                   UpdateNetworkSiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkSiteRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
