// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLEVPCASSOCIATIONRESPONSE_P_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLEVPCASSOCIATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableVpcAssociationResponse;

class CreateLocalGatewayRouteTableVpcAssociationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateLocalGatewayRouteTableVpcAssociationResponsePrivate(CreateLocalGatewayRouteTableVpcAssociationResponse * const q);

    void parseCreateLocalGatewayRouteTableVpcAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocalGatewayRouteTableVpcAssociationResponse)
    Q_DISABLE_COPY(CreateLocalGatewayRouteTableVpcAssociationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
