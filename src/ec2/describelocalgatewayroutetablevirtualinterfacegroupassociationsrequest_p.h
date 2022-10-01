// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONSREQUEST_P_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describelocalgatewayroutetablevirtualinterfacegroupassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest;

class DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest * const q);
    DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequestPrivate(const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequestPrivate &other,
                                   DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
