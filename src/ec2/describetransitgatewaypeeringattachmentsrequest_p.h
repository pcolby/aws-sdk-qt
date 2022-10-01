// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYPEERINGATTACHMENTSREQUEST_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYPEERINGATTACHMENTSREQUEST_P_H

#include "ec2request_p.h"
#include "describetransitgatewaypeeringattachmentsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayPeeringAttachmentsRequest;

class DescribeTransitGatewayPeeringAttachmentsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTransitGatewayPeeringAttachmentsRequestPrivate(const Ec2Request::Action action,
                                   DescribeTransitGatewayPeeringAttachmentsRequest * const q);
    DescribeTransitGatewayPeeringAttachmentsRequestPrivate(const DescribeTransitGatewayPeeringAttachmentsRequestPrivate &other,
                                   DescribeTransitGatewayPeeringAttachmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayPeeringAttachmentsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
