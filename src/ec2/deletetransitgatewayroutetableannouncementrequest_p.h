// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTETABLEANNOUNCEMENTREQUEST_P_H
#define QTAWS_DELETETRANSITGATEWAYROUTETABLEANNOUNCEMENTREQUEST_P_H

#include "ec2request_p.h"
#include "deletetransitgatewayroutetableannouncementrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteTableAnnouncementRequest;

class DeleteTransitGatewayRouteTableAnnouncementRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTransitGatewayRouteTableAnnouncementRequestPrivate(const Ec2Request::Action action,
                                   DeleteTransitGatewayRouteTableAnnouncementRequest * const q);
    DeleteTransitGatewayRouteTableAnnouncementRequestPrivate(const DeleteTransitGatewayRouteTableAnnouncementRequestPrivate &other,
                                   DeleteTransitGatewayRouteTableAnnouncementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayRouteTableAnnouncementRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
