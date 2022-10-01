// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECUSTOMERGATEWAYREQUEST_P_H
#define QTAWS_ASSOCIATECUSTOMERGATEWAYREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "associatecustomergatewayrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateCustomerGatewayRequest;

class AssociateCustomerGatewayRequestPrivate : public NetworkManagerRequestPrivate {

public:
    AssociateCustomerGatewayRequestPrivate(const NetworkManagerRequest::Action action,
                                   AssociateCustomerGatewayRequest * const q);
    AssociateCustomerGatewayRequestPrivate(const AssociateCustomerGatewayRequestPrivate &other,
                                   AssociateCustomerGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateCustomerGatewayRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
