// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINBOUNDCROSSCLUSTERSEARCHCONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEINBOUNDCROSSCLUSTERSEARCHCONNECTIONSRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeInboundCrossClusterSearchConnectionsResponse;

class DescribeInboundCrossClusterSearchConnectionsResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DescribeInboundCrossClusterSearchConnectionsResponsePrivate(DescribeInboundCrossClusterSearchConnectionsResponse * const q);

    void parseDescribeInboundCrossClusterSearchConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInboundCrossClusterSearchConnectionsResponse)
    Q_DISABLE_COPY(DescribeInboundCrossClusterSearchConnectionsResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
