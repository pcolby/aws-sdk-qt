// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYCONNECTREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYCONNECTREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewayconnectrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayConnectRequest;

class CreateTransitGatewayConnectRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayConnectRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayConnectRequest * const q);
    CreateTransitGatewayConnectRequestPrivate(const CreateTransitGatewayConnectRequestPrivate &other,
                                   CreateTransitGatewayConnectRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayConnectRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
