// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONREQUEST_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequestPrivate;

class QTAWSEC2_EXPORT CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest : public Ec2Request {

public:
    CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest(const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest &other);
    CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
