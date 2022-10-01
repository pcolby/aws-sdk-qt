// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYCONNECTSREQUEST_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYCONNECTSREQUEST_P_H

#include "ec2request_p.h"
#include "describetransitgatewayconnectsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayConnectsRequest;

class DescribeTransitGatewayConnectsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTransitGatewayConnectsRequestPrivate(const Ec2Request::Action action,
                                   DescribeTransitGatewayConnectsRequest * const q);
    DescribeTransitGatewayConnectsRequestPrivate(const DescribeTransitGatewayConnectsRequestPrivate &other,
                                   DescribeTransitGatewayConnectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayConnectsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
