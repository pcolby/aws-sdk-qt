// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDELASTICSEARCHINSTANCEOFFERINGRESPONSE_P_H
#define QTAWS_PURCHASERESERVEDELASTICSEARCHINSTANCEOFFERINGRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class PurchaseReservedElasticsearchInstanceOfferingResponse;

class PurchaseReservedElasticsearchInstanceOfferingResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit PurchaseReservedElasticsearchInstanceOfferingResponsePrivate(PurchaseReservedElasticsearchInstanceOfferingResponse * const q);

    void parsePurchaseReservedElasticsearchInstanceOfferingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurchaseReservedElasticsearchInstanceOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedElasticsearchInstanceOfferingResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
