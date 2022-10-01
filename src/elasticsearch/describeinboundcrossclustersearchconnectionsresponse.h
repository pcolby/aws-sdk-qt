// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINBOUNDCROSSCLUSTERSEARCHCONNECTIONSRESPONSE_H
#define QTAWS_DESCRIBEINBOUNDCROSSCLUSTERSEARCHCONNECTIONSRESPONSE_H

#include "elasticsearchresponse.h"
#include "describeinboundcrossclustersearchconnectionsrequest.h"

namespace QtAws {
namespace Elasticsearch {

class DescribeInboundCrossClusterSearchConnectionsResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT DescribeInboundCrossClusterSearchConnectionsResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    DescribeInboundCrossClusterSearchConnectionsResponse(const DescribeInboundCrossClusterSearchConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInboundCrossClusterSearchConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInboundCrossClusterSearchConnectionsResponse)
    Q_DISABLE_COPY(DescribeInboundCrossClusterSearchConnectionsResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
