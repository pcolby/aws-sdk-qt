// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSITEPLANREQUEST_P_H
#define QTAWS_UPDATENETWORKSITEPLANREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "updatenetworksiteplanrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class UpdateNetworkSitePlanRequest;

class UpdateNetworkSitePlanRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    UpdateNetworkSitePlanRequestPrivate(const PrivateNetworksRequest::Action action,
                                   UpdateNetworkSitePlanRequest * const q);
    UpdateNetworkSitePlanRequestPrivate(const UpdateNetworkSitePlanRequestPrivate &other,
                                   UpdateNetworkSitePlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkSitePlanRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
