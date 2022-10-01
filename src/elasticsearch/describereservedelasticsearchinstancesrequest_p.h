// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCESREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "describereservedelasticsearchinstancesrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeReservedElasticsearchInstancesRequest;

class DescribeReservedElasticsearchInstancesRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DescribeReservedElasticsearchInstancesRequestPrivate(const ElasticsearchRequest::Action action,
                                   DescribeReservedElasticsearchInstancesRequest * const q);
    DescribeReservedElasticsearchInstancesRequestPrivate(const DescribeReservedElasticsearchInstancesRequestPrivate &other,
                                   DescribeReservedElasticsearchInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedElasticsearchInstancesRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
