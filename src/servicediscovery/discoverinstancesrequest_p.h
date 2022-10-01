// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERINSTANCESREQUEST_P_H
#define QTAWS_DISCOVERINSTANCESREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "discoverinstancesrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class DiscoverInstancesRequest;

class DiscoverInstancesRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    DiscoverInstancesRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   DiscoverInstancesRequest * const q);
    DiscoverInstancesRequestPrivate(const DiscoverInstancesRequestPrivate &other,
                                   DiscoverInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DiscoverInstancesRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
