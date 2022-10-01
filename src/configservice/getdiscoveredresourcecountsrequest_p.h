// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVEREDRESOURCECOUNTSREQUEST_P_H
#define QTAWS_GETDISCOVEREDRESOURCECOUNTSREQUEST_P_H

#include "configservicerequest_p.h"
#include "getdiscoveredresourcecountsrequest.h"

namespace QtAws {
namespace ConfigService {

class GetDiscoveredResourceCountsRequest;

class GetDiscoveredResourceCountsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetDiscoveredResourceCountsRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetDiscoveredResourceCountsRequest * const q);
    GetDiscoveredResourceCountsRequestPrivate(const GetDiscoveredResourceCountsRequestPrivate &other,
                                   GetDiscoveredResourceCountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDiscoveredResourceCountsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
