// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECARRIERGATEWAYREQUEST_P_H
#define QTAWS_CREATECARRIERGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "createcarriergatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCarrierGatewayRequest;

class CreateCarrierGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    CreateCarrierGatewayRequestPrivate(const Ec2Request::Action action,
                                   CreateCarrierGatewayRequest * const q);
    CreateCarrierGatewayRequestPrivate(const CreateCarrierGatewayRequestPrivate &other,
                                   CreateCarrierGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCarrierGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
