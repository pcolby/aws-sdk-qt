// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISCOVEREDRESOURCESREQUEST_P_H
#define QTAWS_LISTDISCOVEREDRESOURCESREQUEST_P_H

#include "configservicerequest_p.h"
#include "listdiscoveredresourcesrequest.h"

namespace QtAws {
namespace ConfigService {

class ListDiscoveredResourcesRequest;

class ListDiscoveredResourcesRequestPrivate : public ConfigServiceRequestPrivate {

public:
    ListDiscoveredResourcesRequestPrivate(const ConfigServiceRequest::Action action,
                                   ListDiscoveredResourcesRequest * const q);
    ListDiscoveredResourcesRequestPrivate(const ListDiscoveredResourcesRequestPrivate &other,
                                   ListDiscoveredResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDiscoveredResourcesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
