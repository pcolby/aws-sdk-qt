// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCHANGEPROGRESSREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINCHANGEPROGRESSREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "describedomainchangeprogressrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeDomainChangeProgressRequest;

class DescribeDomainChangeProgressRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DescribeDomainChangeProgressRequestPrivate(const ElasticsearchRequest::Action action,
                                   DescribeDomainChangeProgressRequest * const q);
    DescribeDomainChangeProgressRequestPrivate(const DescribeDomainChangeProgressRequestPrivate &other,
                                   DescribeDomainChangeProgressRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainChangeProgressRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
