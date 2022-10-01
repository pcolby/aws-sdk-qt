// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVPCASSOCIATIONSRESPONSE_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVPCASSOCIATIONSRESPONSE_H

#include "ec2response.h"
#include "describelocalgatewayroutetablevpcassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayRouteTableVpcAssociationsResponsePrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewayRouteTableVpcAssociationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeLocalGatewayRouteTableVpcAssociationsResponse(const DescribeLocalGatewayRouteTableVpcAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocalGatewayRouteTableVpcAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewayRouteTableVpcAssociationsResponse)
    Q_DISABLE_COPY(DescribeLocalGatewayRouteTableVpcAssociationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
