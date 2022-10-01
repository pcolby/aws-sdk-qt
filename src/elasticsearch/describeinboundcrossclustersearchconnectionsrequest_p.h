// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINBOUNDCROSSCLUSTERSEARCHCONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBEINBOUNDCROSSCLUSTERSEARCHCONNECTIONSREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "describeinboundcrossclustersearchconnectionsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeInboundCrossClusterSearchConnectionsRequest;

class DescribeInboundCrossClusterSearchConnectionsRequestPrivate : public ElasticsearchRequestPrivate {

public:
    DescribeInboundCrossClusterSearchConnectionsRequestPrivate(const ElasticsearchRequest::Action action,
                                   DescribeInboundCrossClusterSearchConnectionsRequest * const q);
    DescribeInboundCrossClusterSearchConnectionsRequestPrivate(const DescribeInboundCrossClusterSearchConnectionsRequestPrivate &other,
                                   DescribeInboundCrossClusterSearchConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInboundCrossClusterSearchConnectionsRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
