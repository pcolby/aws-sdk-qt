// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEASSOCIATIONSREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEASSOCIATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "gettransitgatewayroutetableassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayRouteTableAssociationsRequest;

class GetTransitGatewayRouteTableAssociationsRequestPrivate : public Ec2RequestPrivate {

public:
    GetTransitGatewayRouteTableAssociationsRequestPrivate(const Ec2Request::Action action,
                                   GetTransitGatewayRouteTableAssociationsRequest * const q);
    GetTransitGatewayRouteTableAssociationsRequestPrivate(const GetTransitGatewayRouteTableAssociationsRequestPrivate &other,
                                   GetTransitGatewayRouteTableAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayRouteTableAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
