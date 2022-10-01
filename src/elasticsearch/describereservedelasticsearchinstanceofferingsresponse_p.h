// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCEOFFERINGSRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCEOFFERINGSRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeReservedElasticsearchInstanceOfferingsResponse;

class DescribeReservedElasticsearchInstanceOfferingsResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DescribeReservedElasticsearchInstanceOfferingsResponsePrivate(DescribeReservedElasticsearchInstanceOfferingsResponse * const q);

    void parseDescribeReservedElasticsearchInstanceOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedElasticsearchInstanceOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedElasticsearchInstanceOfferingsResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
