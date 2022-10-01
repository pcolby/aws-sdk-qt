// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETRANSITGATEWAYROUTETABLEPROPAGATIONREQUEST_P_H
#define QTAWS_ENABLETRANSITGATEWAYROUTETABLEPROPAGATIONREQUEST_P_H

#include "ec2request_p.h"
#include "enabletransitgatewayroutetablepropagationrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableTransitGatewayRouteTablePropagationRequest;

class EnableTransitGatewayRouteTablePropagationRequestPrivate : public Ec2RequestPrivate {

public:
    EnableTransitGatewayRouteTablePropagationRequestPrivate(const Ec2Request::Action action,
                                   EnableTransitGatewayRouteTablePropagationRequest * const q);
    EnableTransitGatewayRouteTablePropagationRequestPrivate(const EnableTransitGatewayRouteTablePropagationRequestPrivate &other,
                                   EnableTransitGatewayRouteTablePropagationRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableTransitGatewayRouteTablePropagationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
