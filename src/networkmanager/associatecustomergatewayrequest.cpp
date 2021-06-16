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

#include "associatecustomergatewayrequest.h"
#include "associatecustomergatewayrequest_p.h"
#include "associatecustomergatewayresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateCustomerGatewayRequest
 * \brief The AssociateCustomerGatewayRequest class provides an interface for NetworkManager AssociateCustomerGateway requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
 *
 * \sa NetworkManagerClient::associateCustomerGateway
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateCustomerGatewayRequest::AssociateCustomerGatewayRequest(const AssociateCustomerGatewayRequest &other)
    : NetworkManagerRequest(new AssociateCustomerGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateCustomerGatewayRequest object.
 */
AssociateCustomerGatewayRequest::AssociateCustomerGatewayRequest()
    : NetworkManagerRequest(new AssociateCustomerGatewayRequestPrivate(NetworkManagerRequest::AssociateCustomerGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateCustomerGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateCustomerGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateCustomerGatewayRequest::response(QNetworkReply * const reply) const
{
    return new AssociateCustomerGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::AssociateCustomerGatewayRequestPrivate
 * \brief The AssociateCustomerGatewayRequestPrivate class provides private implementation for AssociateCustomerGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateCustomerGatewayRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
AssociateCustomerGatewayRequestPrivate::AssociateCustomerGatewayRequestPrivate(
    const NetworkManagerRequest::Action action, AssociateCustomerGatewayRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateCustomerGatewayRequest
 * class' copy constructor.
 */
AssociateCustomerGatewayRequestPrivate::AssociateCustomerGatewayRequestPrivate(
    const AssociateCustomerGatewayRequestPrivate &other, AssociateCustomerGatewayRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
