/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVPCASSOCIATIONSRESPONSE_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVPCASSOCIATIONSRESPONSE_H

#include "ec2response.h"
#include "describelocalgatewayroutetablevpcassociationsrequest.h"

namespace QtAws {
namespace EC2 {

class DescribeLocalGatewayRouteTableVpcAssociationsResponsePrivate;

class QTAWS_EXPORT DescribeLocalGatewayRouteTableVpcAssociationsResponse : public Ec2Response {
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

} // namespace EC2
} // namespace QtAws

#endif
