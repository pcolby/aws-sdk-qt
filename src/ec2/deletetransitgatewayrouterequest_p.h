// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTEREQUEST_P_H
#define QTAWS_DELETETRANSITGATEWAYROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "deletetransitgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteRequest;

class DeleteTransitGatewayRouteRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTransitGatewayRouteRequestPrivate(const Ec2Request::Action action,
                                   DeleteTransitGatewayRouteRequest * const q);
    DeleteTransitGatewayRouteRequestPrivate(const DeleteTransitGatewayRouteRequestPrivate &other,
                                   DeleteTransitGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
