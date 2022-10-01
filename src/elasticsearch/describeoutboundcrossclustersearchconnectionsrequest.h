// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONSREQUEST_H
#define QTAWS_DESCRIBEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONSREQUEST_H

#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeOutboundCrossClusterSearchConnectionsRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeOutboundCrossClusterSearchConnectionsRequest : public ElasticsearchRequest {

public:
    DescribeOutboundCrossClusterSearchConnectionsRequest(const DescribeOutboundCrossClusterSearchConnectionsRequest &other);
    DescribeOutboundCrossClusterSearchConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOutboundCrossClusterSearchConnectionsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
