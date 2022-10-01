// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVPCASSOCIATIONSREQUEST_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLEVPCASSOCIATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayRouteTableVpcAssociationsRequestPrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewayRouteTableVpcAssociationsRequest : public Ec2Request {

public:
    DescribeLocalGatewayRouteTableVpcAssociationsRequest(const DescribeLocalGatewayRouteTableVpcAssociationsRequest &other);
    DescribeLocalGatewayRouteTableVpcAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewayRouteTableVpcAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
