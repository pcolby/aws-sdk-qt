// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBECONNECTIONSREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describeconnectionsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionsRequest;

class DescribeConnectionsRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeConnectionsRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeConnectionsRequest * const q);
    DescribeConnectionsRequestPrivate(const DescribeConnectionsRequestPrivate &other,
                                   DescribeConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
