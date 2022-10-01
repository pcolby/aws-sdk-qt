// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLEVPCASSOCIATIONRESPONSE_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLEVPCASSOCIATIONRESPONSE_H

#include "ec2response.h"
#include "deletelocalgatewayroutetablevpcassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableVpcAssociationResponsePrivate;

class QTAWSEC2_EXPORT DeleteLocalGatewayRouteTableVpcAssociationResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteLocalGatewayRouteTableVpcAssociationResponse(const DeleteLocalGatewayRouteTableVpcAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLocalGatewayRouteTableVpcAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLocalGatewayRouteTableVpcAssociationResponse)
    Q_DISABLE_COPY(DeleteLocalGatewayRouteTableVpcAssociationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
