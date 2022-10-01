// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVPCASSOCIATIONSREQUEST_P_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVPCASSOCIATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describelocalgatewayroutetablevpcassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayRouteTableVpcAssociationsRequest;

class DescribeLocalGatewayRouteTableVpcAssociationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeLocalGatewayRouteTableVpcAssociationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeLocalGatewayRouteTableVpcAssociationsRequest * const q);
    DescribeLocalGatewayRouteTableVpcAssociationsRequestPrivate(const DescribeLocalGatewayRouteTableVpcAssociationsRequestPrivate &other,
                                   DescribeLocalGatewayRouteTableVpcAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocalGatewayRouteTableVpcAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
