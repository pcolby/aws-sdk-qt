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

#include "deregistertransitgatewayrequest.h"
#include "deregistertransitgatewayrequest_p.h"
#include "deregistertransitgatewayresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeregisterTransitGatewayRequest
 * \brief The DeregisterTransitGatewayRequest class provides an interface for NetworkManager DeregisterTransitGateway requests.
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
 * \sa NetworkManagerClient::deregisterTransitGateway
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterTransitGatewayRequest::DeregisterTransitGatewayRequest(const DeregisterTransitGatewayRequest &other)
    : NetworkManagerRequest(new DeregisterTransitGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterTransitGatewayRequest object.
 */
DeregisterTransitGatewayRequest::DeregisterTransitGatewayRequest()
    : NetworkManagerRequest(new DeregisterTransitGatewayRequestPrivate(NetworkManagerRequest::DeregisterTransitGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterTransitGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterTransitGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterTransitGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterTransitGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeregisterTransitGatewayRequestPrivate
 * \brief The DeregisterTransitGatewayRequestPrivate class provides private implementation for DeregisterTransitGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeregisterTransitGatewayRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeregisterTransitGatewayRequestPrivate::DeregisterTransitGatewayRequestPrivate(
    const NetworkManagerRequest::Action action, DeregisterTransitGatewayRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterTransitGatewayRequest
 * class' copy constructor.
 */
DeregisterTransitGatewayRequestPrivate::DeregisterTransitGatewayRequestPrivate(
    const DeregisterTransitGatewayRequestPrivate &other, DeregisterTransitGatewayRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
