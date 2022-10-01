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
