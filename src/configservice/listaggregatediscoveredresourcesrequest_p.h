// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGGREGATEDISCOVEREDRESOURCESREQUEST_P_H
#define QTAWS_LISTAGGREGATEDISCOVEREDRESOURCESREQUEST_P_H

#include "configservicerequest_p.h"
#include "listaggregatediscoveredresourcesrequest.h"

namespace QtAws {
namespace ConfigService {

class ListAggregateDiscoveredResourcesRequest;

class ListAggregateDiscoveredResourcesRequestPrivate : public ConfigServiceRequestPrivate {

public:
    ListAggregateDiscoveredResourcesRequestPrivate(const ConfigServiceRequest::Action action,
                                   ListAggregateDiscoveredResourcesRequest * const q);
    ListAggregateDiscoveredResourcesRequestPrivate(const ListAggregateDiscoveredResourcesRequestPrivate &other,
                                   ListAggregateDiscoveredResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAggregateDiscoveredResourcesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
