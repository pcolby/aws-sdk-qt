// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLETRANSITGATEWAYROUTETABLEPROPAGATIONREQUEST_P_H
#define QTAWS_DISABLETRANSITGATEWAYROUTETABLEPROPAGATIONREQUEST_P_H

#include "ec2request_p.h"
#include "disabletransitgatewayroutetablepropagationrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableTransitGatewayRouteTablePropagationRequest;

class DisableTransitGatewayRouteTablePropagationRequestPrivate : public Ec2RequestPrivate {

public:
    DisableTransitGatewayRouteTablePropagationRequestPrivate(const Ec2Request::Action action,
                                   DisableTransitGatewayRouteTablePropagationRequest * const q);
    DisableTransitGatewayRouteTablePropagationRequestPrivate(const DisableTransitGatewayRouteTablePropagationRequestPrivate &other,
                                   DisableTransitGatewayRouteTablePropagationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableTransitGatewayRouteTablePropagationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
