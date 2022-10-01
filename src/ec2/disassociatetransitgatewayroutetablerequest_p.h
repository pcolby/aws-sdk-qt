// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYROUTETABLEREQUEST_P_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYROUTETABLEREQUEST_P_H

#include "ec2request_p.h"
#include "disassociatetransitgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayRouteTableRequest;

class DisassociateTransitGatewayRouteTableRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateTransitGatewayRouteTableRequestPrivate(const Ec2Request::Action action,
                                   DisassociateTransitGatewayRouteTableRequest * const q);
    DisassociateTransitGatewayRouteTableRequestPrivate(const DisassociateTransitGatewayRouteTableRequestPrivate &other,
                                   DisassociateTransitGatewayRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTransitGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
