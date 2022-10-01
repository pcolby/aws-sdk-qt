// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTEDCONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBEHOSTEDCONNECTIONSREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describehostedconnectionsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeHostedConnectionsRequest;

class DescribeHostedConnectionsRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeHostedConnectionsRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeHostedConnectionsRequest * const q);
    DescribeHostedConnectionsRequestPrivate(const DescribeHostedConnectionsRequestPrivate &other,
                                   DescribeHostedConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHostedConnectionsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
