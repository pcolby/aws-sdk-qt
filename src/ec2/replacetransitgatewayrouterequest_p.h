// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACETRANSITGATEWAYROUTEREQUEST_P_H
#define QTAWS_REPLACETRANSITGATEWAYROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "replacetransitgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceTransitGatewayRouteRequest;

class ReplaceTransitGatewayRouteRequestPrivate : public Ec2RequestPrivate {

public:
    ReplaceTransitGatewayRouteRequestPrivate(const Ec2Request::Action action,
                                   ReplaceTransitGatewayRouteRequest * const q);
    ReplaceTransitGatewayRouteRequestPrivate(const ReplaceTransitGatewayRouteRequestPrivate &other,
                                   ReplaceTransitGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReplaceTransitGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
