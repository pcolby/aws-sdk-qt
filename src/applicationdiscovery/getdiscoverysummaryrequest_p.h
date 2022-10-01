// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVERYSUMMARYREQUEST_P_H
#define QTAWS_GETDISCOVERYSUMMARYREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "getdiscoverysummaryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class GetDiscoverySummaryRequest;

class GetDiscoverySummaryRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    GetDiscoverySummaryRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   GetDiscoverySummaryRequest * const q);
    GetDiscoverySummaryRequestPrivate(const GetDiscoverySummaryRequestPrivate &other,
                                   GetDiscoverySummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDiscoverySummaryRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
