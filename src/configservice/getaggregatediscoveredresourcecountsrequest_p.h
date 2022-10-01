// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATEDISCOVEREDRESOURCECOUNTSREQUEST_P_H
#define QTAWS_GETAGGREGATEDISCOVEREDRESOURCECOUNTSREQUEST_P_H

#include "configservicerequest_p.h"
#include "getaggregatediscoveredresourcecountsrequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateDiscoveredResourceCountsRequest;

class GetAggregateDiscoveredResourceCountsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetAggregateDiscoveredResourceCountsRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetAggregateDiscoveredResourceCountsRequest * const q);
    GetAggregateDiscoveredResourceCountsRequestPrivate(const GetAggregateDiscoveredResourceCountsRequestPrivate &other,
                                   GetAggregateDiscoveredResourceCountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAggregateDiscoveredResourceCountsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
