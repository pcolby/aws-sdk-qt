// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCHANGEPROGRESSREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINCHANGEPROGRESSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "describedomainchangeprogressrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainChangeProgressRequest;

class DescribeDomainChangeProgressRequestPrivate : public OpenSearchRequestPrivate {

public:
    DescribeDomainChangeProgressRequestPrivate(const OpenSearchRequest::Action action,
                                   DescribeDomainChangeProgressRequest * const q);
    DescribeDomainChangeProgressRequestPrivate(const DescribeDomainChangeProgressRequestPrivate &other,
                                   DescribeDomainChangeProgressRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainChangeProgressRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
