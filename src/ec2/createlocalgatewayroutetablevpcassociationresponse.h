// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLEVPCASSOCIATIONRESPONSE_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLEVPCASSOCIATIONRESPONSE_H

#include "ec2response.h"
#include "createlocalgatewayroutetablevpcassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableVpcAssociationResponsePrivate;

class QTAWSEC2_EXPORT CreateLocalGatewayRouteTableVpcAssociationResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateLocalGatewayRouteTableVpcAssociationResponse(const CreateLocalGatewayRouteTableVpcAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocalGatewayRouteTableVpcAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocalGatewayRouteTableVpcAssociationResponse)
    Q_DISABLE_COPY(CreateLocalGatewayRouteTableVpcAssociationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
