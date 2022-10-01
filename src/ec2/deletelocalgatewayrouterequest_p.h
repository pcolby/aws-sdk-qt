// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTEREQUEST_P_H
#define QTAWS_DELETELOCALGATEWAYROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "deletelocalgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteRequest;

class DeleteLocalGatewayRouteRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteLocalGatewayRouteRequestPrivate(const Ec2Request::Action action,
                                   DeleteLocalGatewayRouteRequest * const q);
    DeleteLocalGatewayRouteRequestPrivate(const DeleteLocalGatewayRouteRequestPrivate &other,
                                   DeleteLocalGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLocalGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
