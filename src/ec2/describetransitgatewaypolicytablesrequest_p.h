// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYPOLICYTABLESREQUEST_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYPOLICYTABLESREQUEST_P_H

#include "ec2request_p.h"
#include "describetransitgatewaypolicytablesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayPolicyTablesRequest;

class DescribeTransitGatewayPolicyTablesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTransitGatewayPolicyTablesRequestPrivate(const Ec2Request::Action action,
                                   DescribeTransitGatewayPolicyTablesRequest * const q);
    DescribeTransitGatewayPolicyTablesRequestPrivate(const DescribeTransitGatewayPolicyTablesRequestPrivate &other,
                                   DescribeTransitGatewayPolicyTablesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayPolicyTablesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
