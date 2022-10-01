// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICSEARCHDOMAINCONFIGREQUEST_P_H
#define QTAWS_DESCRIBEELASTICSEARCHDOMAINCONFIGREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "describeelasticsearchdomainconfigrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeElasticsearchDomainConfigRequest;

class DescribeElasticsearchDomainConfigRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DescribeElasticsearchDomainConfigRequestPrivate(const ElasticsearchRequest::Action action,
                                   DescribeElasticsearchDomainConfigRequest * const q);
    DescribeElasticsearchDomainConfigRequestPrivate(const DescribeElasticsearchDomainConfigRequestPrivate &other,
                                   DescribeElasticsearchDomainConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeElasticsearchDomainConfigRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
