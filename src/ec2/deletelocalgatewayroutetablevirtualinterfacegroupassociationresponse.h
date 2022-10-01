// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONRESPONSE_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONRESPONSE_H

#include "ec2response.h"
#include "deletelocalgatewayroutetablevirtualinterfacegroupassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponsePrivate;

class QTAWSEC2_EXPORT DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse(const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse)
    Q_DISABLE_COPY(DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
