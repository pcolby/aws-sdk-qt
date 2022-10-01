// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLEANNOUNCEMENTREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLEANNOUNCEMENTREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewayroutetableannouncementrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteTableAnnouncementRequest;

class CreateTransitGatewayRouteTableAnnouncementRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayRouteTableAnnouncementRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayRouteTableAnnouncementRequest * const q);
    CreateTransitGatewayRouteTableAnnouncementRequestPrivate(const CreateTransitGatewayRouteTableAnnouncementRequestPrivate &other,
                                   CreateTransitGatewayRouteTableAnnouncementRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayRouteTableAnnouncementRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
