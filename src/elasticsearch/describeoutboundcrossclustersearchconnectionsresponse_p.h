// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONSRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeOutboundCrossClusterSearchConnectionsResponse;

class DescribeOutboundCrossClusterSearchConnectionsResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DescribeOutboundCrossClusterSearchConnectionsResponsePrivate(DescribeOutboundCrossClusterSearchConnectionsResponse * const q);

    void parseDescribeOutboundCrossClusterSearchConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOutboundCrossClusterSearchConnectionsResponse)
    Q_DISABLE_COPY(DescribeOutboundCrossClusterSearchConnectionsResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
