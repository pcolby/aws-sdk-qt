// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKSITEREQUEST_P_H
#define QTAWS_CREATENETWORKSITEREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "createnetworksiterequest.h"

namespace QtAws {
namespace PrivateNetworks {

class CreateNetworkSiteRequest;

class CreateNetworkSiteRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    CreateNetworkSiteRequestPrivate(const PrivateNetworksRequest::Action action,
                                   CreateNetworkSiteRequest * const q);
    CreateNetworkSiteRequestPrivate(const CreateNetworkSiteRequestPrivate &other,
                                   CreateNetworkSiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkSiteRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
