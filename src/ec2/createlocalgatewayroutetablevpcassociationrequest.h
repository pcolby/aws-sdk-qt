// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLEVPCASSOCIATIONREQUEST_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLEVPCASSOCIATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableVpcAssociationRequestPrivate;

class QTAWSEC2_EXPORT CreateLocalGatewayRouteTableVpcAssociationRequest : public Ec2Request {

public:
    CreateLocalGatewayRouteTableVpcAssociationRequest(const CreateLocalGatewayRouteTableVpcAssociationRequest &other);
    CreateLocalGatewayRouteTableVpcAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocalGatewayRouteTableVpcAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
