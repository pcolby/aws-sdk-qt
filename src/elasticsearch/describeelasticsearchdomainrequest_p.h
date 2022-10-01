// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINREQUEST_P_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "describeelasticsearchdomainrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainRequest;

class DescribeElasticsearchDomainRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DescribeElasticsearchDomainRequestPrivate(const ElasticsearchRequest::Action action,
                                   DescribeElasticsearchDomainRequest * const q);
    DescribeElasticsearchDomainRequestPrivate(const DescribeElasticsearchDomainRequestPrivate &other,
                                   DescribeElasticsearchDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeElasticsearchDomainRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
