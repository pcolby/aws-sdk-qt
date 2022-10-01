// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINSREQUEST_P_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINSREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "describeelasticsearchdomainsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainsRequest;

class DescribeElasticsearchDomainsRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DescribeElasticsearchDomainsRequestPrivate(const ElasticsearchRequest::Action action,
                                   DescribeElasticsearchDomainsRequest * const q);
    DescribeElasticsearchDomainsRequestPrivate(const DescribeElasticsearchDomainsRequestPrivate &other,
                                   DescribeElasticsearchDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeElasticsearchDomainsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
