// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONSRESPONSE_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONSRESPONSE_H

#include "ec2response.h"
#include "describelocalgatewayroutetablevirtualinterfacegroupassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponsePrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse(const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse)
    Q_DISABLE_COPY(DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
