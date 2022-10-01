// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINBOUNDCONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBEINBOUNDCONNECTIONSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "describeinboundconnectionsrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeInboundConnectionsRequest;

class DescribeInboundConnectionsRequestPrivate : public OpenSearchRequestPrivate {

public:
    DescribeInboundConnectionsRequestPrivate(const OpenSearchRequest::Action action,
                                   DescribeInboundConnectionsRequest * const q);
    DescribeInboundConnectionsRequestPrivate(const DescribeInboundConnectionsRequestPrivate &other,
                                   DescribeInboundConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInboundConnectionsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
