// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOUTBOUNDCONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBEOUTBOUNDCONNECTIONSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "describeoutboundconnectionsrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeOutboundConnectionsRequest;

class DescribeOutboundConnectionsRequestPrivate : public OpenSearchRequestPrivate {

public:
    DescribeOutboundConnectionsRequestPrivate(const OpenSearchRequest::Action action,
                                   DescribeOutboundConnectionsRequest * const q);
    DescribeOutboundConnectionsRequestPrivate(const DescribeOutboundConnectionsRequestPrivate &other,
                                   DescribeOutboundConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOutboundConnectionsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
