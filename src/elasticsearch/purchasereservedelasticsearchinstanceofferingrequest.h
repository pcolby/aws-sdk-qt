// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASERESERVEDELASTICSEARCHINSTANCEOFFERINGREQUEST_H
#define QTAWS_PURCHASERESERVEDELASTICSEARCHINSTANCEOFFERINGREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class PurchaseReservedElasticsearchInstanceOfferingRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT PurchaseReservedElasticsearchInstanceOfferingRequest : public ElasticsearchRequest {

public:
    PurchaseReservedElasticsearchInstanceOfferingRequest(const PurchaseReservedElasticsearchInstanceOfferingRequest &other);
    PurchaseReservedElasticsearchInstanceOfferingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseReservedElasticsearchInstanceOfferingRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
