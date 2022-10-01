// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKSITEREQUEST_P_H
#define QTAWS_DELETENETWORKSITEREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "deletenetworksiterequest.h"

namespace QtAws {
namespace PrivateNetworks {

class DeleteNetworkSiteRequest;

class DeleteNetworkSiteRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    DeleteNetworkSiteRequestPrivate(const PrivateNetworksRequest::Action action,
                                   DeleteNetworkSiteRequest * const q);
    DeleteNetworkSiteRequestPrivate(const DeleteNetworkSiteRequestPrivate &other,
                                   DeleteNetworkSiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkSiteRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
