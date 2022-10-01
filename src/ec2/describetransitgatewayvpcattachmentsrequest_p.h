// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYVPCATTACHMENTSREQUEST_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYVPCATTACHMENTSREQUEST_P_H

#include "ec2request_p.h"
#include "describetransitgatewayvpcattachmentsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayVpcAttachmentsRequest;

class DescribeTransitGatewayVpcAttachmentsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTransitGatewayVpcAttachmentsRequestPrivate(const Ec2Request::Action action,
                                   DescribeTransitGatewayVpcAttachmentsRequest * const q);
    DescribeTransitGatewayVpcAttachmentsRequestPrivate(const DescribeTransitGatewayVpcAttachmentsRequestPrivate &other,
                                   DescribeTransitGatewayVpcAttachmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayVpcAttachmentsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
