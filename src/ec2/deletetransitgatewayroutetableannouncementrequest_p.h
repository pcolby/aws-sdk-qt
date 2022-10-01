/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
