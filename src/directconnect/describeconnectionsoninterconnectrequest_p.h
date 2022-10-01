// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONSONINTERCONNECTREQUEST_P_H
#define QTAWS_DESCRIBECONNECTIONSONINTERCONNECTREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describeconnectionsoninterconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionsOnInterconnectRequest;

class DescribeConnectionsOnInterconnectRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeConnectionsOnInterconnectRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeConnectionsOnInterconnectRequest * const q);
    DescribeConnectionsOnInterconnectRequestPrivate(const DescribeConnectionsOnInterconnectRequestPrivate &other,
                                   DescribeConnectionsOnInterconnectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionsOnInterconnectRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
