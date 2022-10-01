// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPNGATEWAYREQUEST_P_H
#define QTAWS_DELETEVPNGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "deletevpngatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpnGatewayRequest;

class DeleteVpnGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteVpnGatewayRequestPrivate(const Ec2Request::Action action,
                                   DeleteVpnGatewayRequest * const q);
    DeleteVpnGatewayRequestPrivate(const DeleteVpnGatewayRequestPrivate &other,
                                   DeleteVpnGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpnGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
