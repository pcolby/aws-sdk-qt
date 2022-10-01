// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCESRESPONSE_H
#define QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCESRESPONSE_H

#include "elasticsearchresponse.h"
#include "describereservedelasticsearchinstancesrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeReservedElasticsearchInstancesResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeReservedElasticsearchInstancesResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DescribeReservedElasticsearchInstancesResponse(const DescribeReservedElasticsearchInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedElasticsearchInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedElasticsearchInstancesResponse)
    Q_DISABLE_COPY(DescribeReservedElasticsearchInstancesResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
