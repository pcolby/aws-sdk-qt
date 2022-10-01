// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMERGATEWAYREQUEST_P_H
#define QTAWS_DELETECUSTOMERGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "deletecustomergatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteCustomerGatewayRequest;

class DeleteCustomerGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteCustomerGatewayRequestPrivate(const Ec2Request::Action action,
                                   DeleteCustomerGatewayRequest * const q);
    DeleteCustomerGatewayRequestPrivate(const DeleteCustomerGatewayRequestPrivate &other,
                                   DeleteCustomerGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomerGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
