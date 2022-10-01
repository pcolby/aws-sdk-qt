// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDELASTICSEARCHINSTANCEOFFERINGRESPONSE_H
#define QTAWS_PURCHASERESERVEDELASTICSEARCHINSTANCEOFFERINGRESPONSE_H

#include "elasticsearchresponse.h"
#include "purchasereservedelasticsearchinstanceofferingrequest.h"

namespace QtAws {
namespace Elasticsearch {

class PurchaseReservedElasticsearchInstanceOfferingResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT PurchaseReservedElasticsearchInstanceOfferingResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    PurchaseReservedElasticsearchInstanceOfferingResponse(const PurchaseReservedElasticsearchInstanceOfferingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurchaseReservedElasticsearchInstanceOfferingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedElasticsearchInstanceOfferingResponse)
    Q_DISABLE_COPY(PurchaseReservedElasticsearchInstanceOfferingResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
