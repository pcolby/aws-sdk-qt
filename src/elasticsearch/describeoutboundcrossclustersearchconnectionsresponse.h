// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONSRESPONSE_H
#define QTAWS_DESCRIBEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONSRESPONSE_H

#include "elasticsearchresponse.h"
#include "describeoutboundcrossclustersearchconnectionsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeOutboundCrossClusterSearchConnectionsResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeOutboundCrossClusterSearchConnectionsResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DescribeOutboundCrossClusterSearchConnectionsResponse(const DescribeOutboundCrossClusterSearchConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOutboundCrossClusterSearchConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOutboundCrossClusterSearchConnectionsResponse)
    Q_DISABLE_COPY(DescribeOutboundCrossClusterSearchConnectionsResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
