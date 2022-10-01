// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCEOFFERINGSRESPONSE_H
#define QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCEOFFERINGSRESPONSE_H

#include "elasticsearchresponse.h"
#include "describereservedelasticsearchinstanceofferingsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeReservedElasticsearchInstanceOfferingsResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeReservedElasticsearchInstanceOfferingsResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DescribeReservedElasticsearchInstanceOfferingsResponse(const DescribeReservedElasticsearchInstanceOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedElasticsearchInstanceOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedElasticsearchInstanceOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedElasticsearchInstanceOfferingsResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
