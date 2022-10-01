// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLEVPCASSOCIATIONREQUEST_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLEVPCASSOCIATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableVpcAssociationRequestPrivate;

class QTAWSEC2_EXPORT DeleteLocalGatewayRouteTableVpcAssociationRequest : public Ec2Request {

public:
    DeleteLocalGatewayRouteTableVpcAssociationRequest(const DeleteLocalGatewayRouteTableVpcAssociationRequest &other);
    DeleteLocalGatewayRouteTableVpcAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLocalGatewayRouteTableVpcAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
