// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYROUTETABLEREQUEST_P_H
#define QTAWS_ASSOCIATETRANSITGATEWAYROUTETABLEREQUEST_P_H

#include "ec2request_p.h"
#include "associatetransitgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayRouteTableRequest;

class AssociateTransitGatewayRouteTableRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateTransitGatewayRouteTableRequestPrivate(const Ec2Request::Action action,
                                   AssociateTransitGatewayRouteTableRequest * const q);
    AssociateTransitGatewayRouteTableRequestPrivate(const AssociateTransitGatewayRouteTableRequestPrivate &other,
                                   AssociateTransitGatewayRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTransitGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
