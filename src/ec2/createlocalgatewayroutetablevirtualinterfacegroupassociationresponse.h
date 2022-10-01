// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONRESPONSE_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONRESPONSE_H

#include "ec2response.h"
#include "createlocalgatewayroutetablevirtualinterfacegroupassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponsePrivate;

class QTAWSEC2_EXPORT CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse(const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse)
    Q_DISABLE_COPY(CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
