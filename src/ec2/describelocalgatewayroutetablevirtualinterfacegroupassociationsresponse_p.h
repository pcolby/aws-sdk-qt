// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONSRESPONSE_P_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse;

class DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponsePrivate(DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse * const q);

    void parseDescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse)
    Q_DISABLE_COPY(DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
