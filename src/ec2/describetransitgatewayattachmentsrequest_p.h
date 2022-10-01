// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYATTACHMENTSREQUEST_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYATTACHMENTSREQUEST_P_H

#include "ec2request_p.h"
#include "describetransitgatewayattachmentsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayAttachmentsRequest;

class DescribeTransitGatewayAttachmentsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTransitGatewayAttachmentsRequestPrivate(const Ec2Request::Action action,
                                   DescribeTransitGatewayAttachmentsRequest * const q);
    DescribeTransitGatewayAttachmentsRequestPrivate(const DescribeTransitGatewayAttachmentsRequestPrivate &other,
                                   DescribeTransitGatewayAttachmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayAttachmentsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
