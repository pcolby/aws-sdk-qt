// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOUTBOUNDCONNECTIONSRESPONSE_H
#define QTAWS_DESCRIBEOUTBOUNDCONNECTIONSRESPONSE_H

#include "opensearchresponse.h"
#include "describeoutboundconnectionsrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeOutboundConnectionsResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DescribeOutboundConnectionsResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DescribeOutboundConnectionsResponse(const DescribeOutboundConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOutboundConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOutboundConnectionsResponse)
    Q_DISABLE_COPY(DescribeOutboundConnectionsResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
