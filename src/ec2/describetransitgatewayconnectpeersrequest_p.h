// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYCONNECTPEERSREQUEST_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYCONNECTPEERSREQUEST_P_H

#include "ec2request_p.h"
#include "describetransitgatewayconnectpeersrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayConnectPeersRequest;

class DescribeTransitGatewayConnectPeersRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTransitGatewayConnectPeersRequestPrivate(const Ec2Request::Action action,
                                   DescribeTransitGatewayConnectPeersRequest * const q);
    DescribeTransitGatewayConnectPeersRequestPrivate(const DescribeTransitGatewayConnectPeersRequestPrivate &other,
                                   DescribeTransitGatewayConnectPeersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayConnectPeersRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
