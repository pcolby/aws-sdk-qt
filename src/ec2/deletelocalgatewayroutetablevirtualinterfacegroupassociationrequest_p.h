// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONREQUEST_P_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONREQUEST_P_H

#include "ec2request_p.h"
#include "deletelocalgatewayroutetablevirtualinterfacegroupassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest;

class DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequestPrivate(const Ec2Request::Action action,
                                   DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest * const q);
    DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequestPrivate(const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequestPrivate &other,
                                   DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
