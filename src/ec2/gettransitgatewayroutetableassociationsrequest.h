// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEASSOCIATIONSREQUEST_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEASSOCIATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayRouteTableAssociationsRequestPrivate;

class QTAWSEC2_EXPORT GetTransitGatewayRouteTableAssociationsRequest : public Ec2Request {

public:
    GetTransitGatewayRouteTableAssociationsRequest(const GetTransitGatewayRouteTableAssociationsRequest &other);
    GetTransitGatewayRouteTableAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayRouteTableAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
