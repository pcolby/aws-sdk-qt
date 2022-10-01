// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTEREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteRequest;

class CreateTransitGatewayRouteRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayRouteRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayRouteRequest * const q);
    CreateTransitGatewayRouteRequestPrivate(const CreateTransitGatewayRouteRequestPrivate &other,
                                   CreateTransitGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
