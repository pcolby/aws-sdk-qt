// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENATGATEWAYREQUEST_P_H
#define QTAWS_CREATENATGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "createnatgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNatGatewayRequest;

class CreateNatGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    CreateNatGatewayRequestPrivate(const Ec2Request::Action action,
                                   CreateNatGatewayRequest * const q);
    CreateNatGatewayRequestPrivate(const CreateNatGatewayRequestPrivate &other,
                                   CreateNatGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNatGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
