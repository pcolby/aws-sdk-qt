// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECUSTOMERGATEWAYREQUEST_P_H
#define QTAWS_DISASSOCIATECUSTOMERGATEWAYREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "disassociatecustomergatewayrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateCustomerGatewayRequest;

class DisassociateCustomerGatewayRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DisassociateCustomerGatewayRequestPrivate(const NetworkManagerRequest::Action action,
                                   DisassociateCustomerGatewayRequest * const q);
    DisassociateCustomerGatewayRequestPrivate(const DisassociateCustomerGatewayRequestPrivate &other,
                                   DisassociateCustomerGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateCustomerGatewayRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
