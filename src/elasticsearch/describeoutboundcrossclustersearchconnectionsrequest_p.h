// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONSREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "describeoutboundcrossclustersearchconnectionsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeOutboundCrossClusterSearchConnectionsRequest;

class DescribeOutboundCrossClusterSearchConnectionsRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DescribeOutboundCrossClusterSearchConnectionsRequestPrivate(const ElasticsearchRequest::Action action,
                                   DescribeOutboundCrossClusterSearchConnectionsRequest * const q);
    DescribeOutboundCrossClusterSearchConnectionsRequestPrivate(const DescribeOutboundCrossClusterSearchConnectionsRequestPrivate &other,
                                   DescribeOutboundCrossClusterSearchConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOutboundCrossClusterSearchConnectionsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
