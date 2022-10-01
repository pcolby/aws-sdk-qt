// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONREQUEST_P_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONREQUEST_P_H

#include "ec2request_p.h"
#include "createlocalgatewayroutetablevirtualinterfacegroupassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest;

class CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequestPrivate : public Ec2RequestPrivate {

public:
    CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequestPrivate(const Ec2Request::Action action,
                                   CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest * const q);
    CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequestPrivate(const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequestPrivate &other,
                                   CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
