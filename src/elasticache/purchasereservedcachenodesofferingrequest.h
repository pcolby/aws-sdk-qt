// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDCACHENODESOFFERINGREQUEST_H
#define QTAWS_PURCHASERESERVEDCACHENODESOFFERINGREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class PurchaseReservedCacheNodesOfferingRequestPrivate;

class QTAWSELASTICACHE_EXPORT PurchaseReservedCacheNodesOfferingRequest : public ElastiCacheRequest {

public:
    PurchaseReservedCacheNodesOfferingRequest(const PurchaseReservedCacheNodesOfferingRequest &other);
    PurchaseReservedCacheNodesOfferingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedCacheNodesOfferingRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
