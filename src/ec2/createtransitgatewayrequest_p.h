// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRequest;

class CreateTransitGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayRequest * const q);
    CreateTransitGatewayRequestPrivate(const CreateTransitGatewayRequestPrivate &other,
                                   CreateTransitGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
