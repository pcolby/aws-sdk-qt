// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCEOFFERINGSREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCEOFFERINGSREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "describereservedelasticsearchinstanceofferingsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeReservedElasticsearchInstanceOfferingsRequest;

class DescribeReservedElasticsearchInstanceOfferingsRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DescribeReservedElasticsearchInstanceOfferingsRequestPrivate(const ElasticsearchRequest::Action action,
                                   DescribeReservedElasticsearchInstanceOfferingsRequest * const q);
    DescribeReservedElasticsearchInstanceOfferingsRequestPrivate(const DescribeReservedElasticsearchInstanceOfferingsRequestPrivate &other,
                                   DescribeReservedElasticsearchInstanceOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedElasticsearchInstanceOfferingsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
