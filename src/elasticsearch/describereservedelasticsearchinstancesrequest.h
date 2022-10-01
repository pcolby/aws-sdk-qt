// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCESREQUEST_H
#define QTAWS_DESCRIBERESERVEDELASTICSEARCHINSTANCESREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeReservedElasticsearchInstancesRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeReservedElasticsearchInstancesRequest : public ElasticsearchRequest {

public:
    DescribeReservedElasticsearchInstancesRequest(const DescribeReservedElasticsearchInstancesRequest &other);
    DescribeReservedElasticsearchInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedElasticsearchInstancesRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
