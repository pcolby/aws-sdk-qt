/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ASSOCIATECUSTOMERGATEWAYREQUEST_P_H
#define QTAWS_ASSOCIATECUSTOMERGATEWAYREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "associatecustomergatewayrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateCustomerGatewayRequest;

class QTAWS_EXPORT AssociateCustomerGatewayRequestPrivate : public NetworkManagerRequestPrivate {

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
