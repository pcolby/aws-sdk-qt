// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDCACHENODESOFFERINGRESPONSE_P_H
#define QTAWS_PURCHASERESERVEDCACHENODESOFFERINGRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class PurchaseReservedCacheNodesOfferingResponse;

class PurchaseReservedCacheNodesOfferingResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit PurchaseReservedCacheNodesOfferingResponsePrivate(PurchaseReservedCacheNodesOfferingResponse * const q);

    void parsePurchaseReservedCacheNodesOfferingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedCacheNodesOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedCacheNodesOfferingResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
