// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLEREQUEST_P_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLEREQUEST_P_H

#include "ec2request_p.h"
#include "deletelocalgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableRequest;

class DeleteLocalGatewayRouteTableRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteLocalGatewayRouteTableRequestPrivate(const Ec2Request::Action action,
                                   DeleteLocalGatewayRouteTableRequest * const q);
    DeleteLocalGatewayRouteTableRequestPrivate(const DeleteLocalGatewayRouteTableRequestPrivate &other,
                                   DeleteLocalGatewayRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLocalGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
