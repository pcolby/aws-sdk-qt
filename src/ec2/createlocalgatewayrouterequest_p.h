// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTEREQUEST_P_H
#define QTAWS_CREATELOCALGATEWAYROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "createlocalgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteRequest;

class CreateLocalGatewayRouteRequestPrivate : public Ec2RequestPrivate {

public:
    CreateLocalGatewayRouteRequestPrivate(const Ec2Request::Action action,
                                   CreateLocalGatewayRouteRequest * const q);
    CreateLocalGatewayRouteRequestPrivate(const CreateLocalGatewayRouteRequestPrivate &other,
                                   CreateLocalGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocalGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
