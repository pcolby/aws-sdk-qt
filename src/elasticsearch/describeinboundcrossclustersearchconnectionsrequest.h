// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINBOUNDCROSSCLUSTERSEARCHCONNECTIONSREQUEST_H
#define QTAWS_DESCRIBEINBOUNDCROSSCLUSTERSEARCHCONNECTIONSREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeInboundCrossClusterSearchConnectionsRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeInboundCrossClusterSearchConnectionsRequest : public ElasticsearchRequest {

public:
    DescribeInboundCrossClusterSearchConnectionsRequest(const DescribeInboundCrossClusterSearchConnectionsRequest &other);
    DescribeInboundCrossClusterSearchConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInboundCrossClusterSearchConnectionsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
