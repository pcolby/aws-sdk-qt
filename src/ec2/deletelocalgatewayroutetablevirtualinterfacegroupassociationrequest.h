// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONREQUEST_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLEVIRTUALINTERFACEGROUPASSOCIATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequestPrivate;

class QTAWSEC2_EXPORT DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest : public Ec2Request {

public:
    DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest(const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest &other);
    DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
