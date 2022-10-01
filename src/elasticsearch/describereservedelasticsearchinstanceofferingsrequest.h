// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCEOFFERINGSREQUEST_H
#define QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCEOFFERINGSREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeReservedElasticsearchInstanceOfferingsRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeReservedElasticsearchInstanceOfferingsRequest : public ElasticsearchRequest {

public:
    DescribeReservedElasticsearchInstanceOfferingsRequest(const DescribeReservedElasticsearchInstanceOfferingsRequest &other);
    DescribeReservedElasticsearchInstanceOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedElasticsearchInstanceOfferingsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
