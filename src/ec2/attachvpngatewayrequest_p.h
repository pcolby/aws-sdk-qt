// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHVPNGATEWAYREQUEST_P_H
#define QTAWS_ATTACHVPNGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "attachvpngatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class AttachVpnGatewayRequest;

class AttachVpnGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    AttachVpnGatewayRequestPrivate(const Ec2Request::Action action,
                                   AttachVpnGatewayRequest * const q);
    AttachVpnGatewayRequestPrivate(const AttachVpnGatewayRequestPrivate &other,
                                   AttachVpnGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachVpnGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
