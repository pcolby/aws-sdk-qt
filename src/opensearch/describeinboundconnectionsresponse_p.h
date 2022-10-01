// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINBOUNDCONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEINBOUNDCONNECTIONSRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DescribeInboundConnectionsResponse;

class DescribeInboundConnectionsResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DescribeInboundConnectionsResponsePrivate(DescribeInboundConnectionsResponse * const q);

    void parseDescribeInboundConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInboundConnectionsResponse)
    Q_DISABLE_COPY(DescribeInboundConnectionsResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
