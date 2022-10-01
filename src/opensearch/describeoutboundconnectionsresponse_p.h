// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOUTBOUNDCONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEOUTBOUNDCONNECTIONSRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DescribeOutboundConnectionsResponse;

class DescribeOutboundConnectionsResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DescribeOutboundConnectionsResponsePrivate(DescribeOutboundConnectionsResponse * const q);

    void parseDescribeOutboundConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOutboundConnectionsResponse)
    Q_DISABLE_COPY(DescribeOutboundConnectionsResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
