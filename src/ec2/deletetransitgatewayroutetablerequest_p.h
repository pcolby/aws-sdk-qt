// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTETABLEREQUEST_P_H
#define QTAWS_DELETETRANSITGATEWAYROUTETABLEREQUEST_P_H

#include "ec2request_p.h"
#include "deletetransitgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteTableRequest;

class DeleteTransitGatewayRouteTableRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTransitGatewayRouteTableRequestPrivate(const Ec2Request::Action action,
                                   DeleteTransitGatewayRouteTableRequest * const q);
    DeleteTransitGatewayRouteTableRequestPrivate(const DeleteTransitGatewayRouteTableRequestPrivate &other,
                                   DeleteTransitGatewayRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
