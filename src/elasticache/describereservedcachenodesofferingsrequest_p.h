// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDCACHENODESOFFERINGSREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDCACHENODESOFFERINGSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describereservedcachenodesofferingsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReservedCacheNodesOfferingsRequest;

class DescribeReservedCacheNodesOfferingsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeReservedCacheNodesOfferingsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeReservedCacheNodesOfferingsRequest * const q);
    DescribeReservedCacheNodesOfferingsRequestPrivate(const DescribeReservedCacheNodesOfferingsRequestPrivate &other,
                                   DescribeReservedCacheNodesOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedCacheNodesOfferingsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
