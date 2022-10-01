// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDCACHENODESOFFERINGREQUEST_P_H
#define QTAWS_PURCHASERESERVEDCACHENODESOFFERINGREQUEST_P_H

#include "elasticacherequest_p.h"
#include "purchasereservedcachenodesofferingrequest.h"

namespace QtAws {
namespace ElastiCache {

class PurchaseReservedCacheNodesOfferingRequest;

class PurchaseReservedCacheNodesOfferingRequestPrivate : public ElastiCacheRequestPrivate {

public:
    PurchaseReservedCacheNodesOfferingRequestPrivate(const ElastiCacheRequest::Action action,
                                   PurchaseReservedCacheNodesOfferingRequest * const q);
    PurchaseReservedCacheNodesOfferingRequestPrivate(const PurchaseReservedCacheNodesOfferingRequestPrivate &other,
                                   PurchaseReservedCacheNodesOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedCacheNodesOfferingRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
