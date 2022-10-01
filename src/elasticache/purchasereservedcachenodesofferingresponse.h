// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDCACHENODESOFFERINGRESPONSE_H
#define QTAWS_PURCHASERESERVEDCACHENODESOFFERINGRESPONSE_H

#include "elasticacheresponse.h"
#include "purchasereservedcachenodesofferingrequest.h"

namespace QtAws {
namespace ElastiCache {

class PurchaseReservedCacheNodesOfferingResponsePrivate;

class QTAWSELASTICACHE_EXPORT PurchaseReservedCacheNodesOfferingResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    PurchaseReservedCacheNodesOfferingResponse(const PurchaseReservedCacheNodesOfferingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurchaseReservedCacheNodesOfferingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedCacheNodesOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedCacheNodesOfferingResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
