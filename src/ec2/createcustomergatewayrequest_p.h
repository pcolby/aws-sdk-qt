// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMERGATEWAYREQUEST_P_H
#define QTAWS_CREATECUSTOMERGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "createcustomergatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCustomerGatewayRequest;

class CreateCustomerGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    CreateCustomerGatewayRequestPrivate(const Ec2Request::Action action,
                                   CreateCustomerGatewayRequest * const q);
    CreateCustomerGatewayRequestPrivate(const CreateCustomerGatewayRequestPrivate &other,
                                   CreateCustomerGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomerGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
