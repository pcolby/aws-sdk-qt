// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEGRESSONLYINTERNETGATEWAYREQUEST_P_H
#define QTAWS_CREATEEGRESSONLYINTERNETGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "createegressonlyinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateEgressOnlyInternetGatewayRequest;

class CreateEgressOnlyInternetGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    CreateEgressOnlyInternetGatewayRequestPrivate(const Ec2Request::Action action,
                                   CreateEgressOnlyInternetGatewayRequest * const q);
    CreateEgressOnlyInternetGatewayRequestPrivate(const CreateEgressOnlyInternetGatewayRequestPrivate &other,
                                   CreateEgressOnlyInternetGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEgressOnlyInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
