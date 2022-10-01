// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLEREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLEREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteTableRequest;

class CreateTransitGatewayRouteTableRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayRouteTableRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayRouteTableRequest * const q);
    CreateTransitGatewayRouteTableRequestPrivate(const CreateTransitGatewayRouteTableRequestPrivate &other,
                                   CreateTransitGatewayRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
