/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETAGGREGATEDISCOVEREDRESOURCECOUNTSREQUEST_P_H
#define QTAWS_GETAGGREGATEDISCOVEREDRESOURCECOUNTSREQUEST_P_H

#include "configservicerequest_p.h"
#include "getaggregatediscoveredresourcecountsrequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateDiscoveredResourceCountsRequest;

class QTAWS_EXPORT GetAggregateDiscoveredResourceCountsRequestPrivate : public ConfigServiceRequestPrivate {

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
