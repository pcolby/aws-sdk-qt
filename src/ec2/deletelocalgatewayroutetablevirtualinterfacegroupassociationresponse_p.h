// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONRESPONSE_P_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse;

class DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponsePrivate(DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse * const q);

    void parseDeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse)
    Q_DISABLE_COPY(DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
