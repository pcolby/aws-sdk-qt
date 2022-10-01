// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONRESPONSE_P_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse;

class CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponsePrivate(CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse * const q);

    void parseCreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse)
    Q_DISABLE_COPY(CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
