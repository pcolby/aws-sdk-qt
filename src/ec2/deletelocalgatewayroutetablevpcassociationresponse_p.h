// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLEVPCASSOCIATIONRESPONSE_P_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLEVPCASSOCIATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableVpcAssociationResponse;

class DeleteLocalGatewayRouteTableVpcAssociationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteLocalGatewayRouteTableVpcAssociationResponsePrivate(DeleteLocalGatewayRouteTableVpcAssociationResponse * const q);

    void parseDeleteLocalGatewayRouteTableVpcAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLocalGatewayRouteTableVpcAssociationResponse)
    Q_DISABLE_COPY(DeleteLocalGatewayRouteTableVpcAssociationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
