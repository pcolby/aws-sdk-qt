// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNGATEWAYREQUEST_P_H
#define QTAWS_CREATEVPNGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "createvpngatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnGatewayRequest;

class CreateVpnGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    CreateVpnGatewayRequestPrivate(const Ec2Request::Action action,
                                   CreateVpnGatewayRequest * const q);
    CreateVpnGatewayRequestPrivate(const CreateVpnGatewayRequestPrivate &other,
                                   CreateVpnGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpnGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
