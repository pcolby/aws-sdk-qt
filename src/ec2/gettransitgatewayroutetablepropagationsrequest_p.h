// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEPROPAGATIONSREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEPROPAGATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "gettransitgatewayroutetablepropagationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayRouteTablePropagationsRequest;

class GetTransitGatewayRouteTablePropagationsRequestPrivate : public Ec2RequestPrivate {

public:
    GetTransitGatewayRouteTablePropagationsRequestPrivate(const Ec2Request::Action action,
                                   GetTransitGatewayRouteTablePropagationsRequest * const q);
    GetTransitGatewayRouteTablePropagationsRequestPrivate(const GetTransitGatewayRouteTablePropagationsRequestPrivate &other,
                                   GetTransitGatewayRouteTablePropagationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayRouteTablePropagationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
