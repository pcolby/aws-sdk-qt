// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCESRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeReservedElasticsearchInstancesResponse;

class DescribeReservedElasticsearchInstancesResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DescribeReservedElasticsearchInstancesResponsePrivate(DescribeReservedElasticsearchInstancesResponse * const q);

    void parseDescribeReservedElasticsearchInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedElasticsearchInstancesResponse)
    Q_DISABLE_COPY(DescribeReservedElasticsearchInstancesResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
