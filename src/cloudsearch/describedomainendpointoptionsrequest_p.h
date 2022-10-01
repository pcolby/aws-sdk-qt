// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINENDPOINTOPTIONSREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINENDPOINTOPTIONSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "describedomainendpointoptionsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeDomainEndpointOptionsRequest;

class DescribeDomainEndpointOptionsRequestPrivate : public CloudSearchRequestPrivate {

public:
    DescribeDomainEndpointOptionsRequestPrivate(const CloudSearchRequest::Action action,
                                   DescribeDomainEndpointOptionsRequest * const q);
    DescribeDomainEndpointOptionsRequestPrivate(const DescribeDomainEndpointOptionsRequestPrivate &other,
                                   DescribeDomainEndpointOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainEndpointOptionsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
