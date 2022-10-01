// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHVPNGATEWAYREQUEST_P_H
#define QTAWS_DETACHVPNGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "detachvpngatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DetachVpnGatewayRequest;

class DetachVpnGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    DetachVpnGatewayRequestPrivate(const Ec2Request::Action action,
                                   DetachVpnGatewayRequest * const q);
    DetachVpnGatewayRequestPrivate(const DetachVpnGatewayRequestPrivate &other,
                                   DetachVpnGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachVpnGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
