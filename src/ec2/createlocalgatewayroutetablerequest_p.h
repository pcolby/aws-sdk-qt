// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLEREQUEST_P_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLEREQUEST_P_H

#include "ec2request_p.h"
#include "createlocalgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableRequest;

class CreateLocalGatewayRouteTableRequestPrivate : public Ec2RequestPrivate {

public:
    CreateLocalGatewayRouteTableRequestPrivate(const Ec2Request::Action action,
                                   CreateLocalGatewayRouteTableRequest * const q);
    CreateLocalGatewayRouteTableRequestPrivate(const CreateLocalGatewayRouteTableRequestPrivate &other,
                                   CreateLocalGatewayRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocalGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
