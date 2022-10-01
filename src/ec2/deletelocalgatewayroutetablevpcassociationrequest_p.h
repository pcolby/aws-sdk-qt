// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLEVPCASSOCIATIONREQUEST_P_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLEVPCASSOCIATIONREQUEST_P_H

#include "ec2request_p.h"
#include "deletelocalgatewayroutetablevpcassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableVpcAssociationRequest;

class DeleteLocalGatewayRouteTableVpcAssociationRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteLocalGatewayRouteTableVpcAssociationRequestPrivate(const Ec2Request::Action action,
                                   DeleteLocalGatewayRouteTableVpcAssociationRequest * const q);
    DeleteLocalGatewayRouteTableVpcAssociationRequestPrivate(const DeleteLocalGatewayRouteTableVpcAssociationRequestPrivate &other,
                                   DeleteLocalGatewayRouteTableVpcAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLocalGatewayRouteTableVpcAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
