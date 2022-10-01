// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLEVPCASSOCIATIONREQUEST_P_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLEVPCASSOCIATIONREQUEST_P_H

#include "ec2request_p.h"
#include "createlocalgatewayroutetablevpcassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableVpcAssociationRequest;

class CreateLocalGatewayRouteTableVpcAssociationRequestPrivate : public Ec2RequestPrivate {

public:
    CreateLocalGatewayRouteTableVpcAssociationRequestPrivate(const Ec2Request::Action action,
                                   CreateLocalGatewayRouteTableVpcAssociationRequest * const q);
    CreateLocalGatewayRouteTableVpcAssociationRequestPrivate(const CreateLocalGatewayRouteTableVpcAssociationRequestPrivate &other,
                                   CreateLocalGatewayRouteTableVpcAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocalGatewayRouteTableVpcAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
