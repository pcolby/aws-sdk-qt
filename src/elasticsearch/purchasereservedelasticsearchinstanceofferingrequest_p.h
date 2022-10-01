// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDELASTICSEARCHINSTANCEOFFERINGREQUEST_P_H
#define QTAWS_PURCHASERESERVEDELASTICSEARCHINSTANCEOFFERINGREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "purchasereservedelasticsearchinstanceofferingrequest.h"

namespace QtAws {
namespace Elasticsearch {

class PurchaseReservedElasticsearchInstanceOfferingRequest;

class PurchaseReservedElasticsearchInstanceOfferingRequestPrivate : public ElasticsearchRequestPrivate {

public:
    PurchaseReservedElasticsearchInstanceOfferingRequestPrivate(const ElasticsearchRequest::Action action,
                                   PurchaseReservedElasticsearchInstanceOfferingRequest * const q);
    PurchaseReservedElasticsearchInstanceOfferingRequestPrivate(const PurchaseReservedElasticsearchInstanceOfferingRequestPrivate &other,
                                   PurchaseReservedElasticsearchInstanceOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedElasticsearchInstanceOfferingRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
