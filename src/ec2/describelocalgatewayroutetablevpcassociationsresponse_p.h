// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVPCASSOCIATIONSRESPONSE_P_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVPCASSOCIATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayRouteTableVpcAssociationsResponse;

class DescribeLocalGatewayRouteTableVpcAssociationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeLocalGatewayRouteTableVpcAssociationsResponsePrivate(DescribeLocalGatewayRouteTableVpcAssociationsResponse * const q);

    void parseDescribeLocalGatewayRouteTableVpcAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocalGatewayRouteTableVpcAssociationsResponse)
    Q_DISABLE_COPY(DescribeLocalGatewayRouteTableVpcAssociationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
