// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOCALGATEWAYROUTEREQUEST_P_H
#define QTAWS_MODIFYLOCALGATEWAYROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "modifylocalgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyLocalGatewayRouteRequest;

class ModifyLocalGatewayRouteRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyLocalGatewayRouteRequestPrivate(const Ec2Request::Action action,
                                   ModifyLocalGatewayRouteRequest * const q);
    ModifyLocalGatewayRouteRequestPrivate(const ModifyLocalGatewayRouteRequestPrivate &other,
                                   ModifyLocalGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyLocalGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
