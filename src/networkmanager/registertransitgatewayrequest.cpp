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

#include "registertransitgatewayrequest.h"
#include "registertransitgatewayrequest_p.h"
#include "registertransitgatewayresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::RegisterTransitGatewayRequest
 * \brief The RegisterTransitGatewayRequest class provides an interface for NetworkManager RegisterTransitGateway requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::registerTransitGateway
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterTransitGatewayRequest::RegisterTransitGatewayRequest(const RegisterTransitGatewayRequest &other)
    : NetworkManagerRequest(new RegisterTransitGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterTransitGatewayRequest object.
 */
RegisterTransitGatewayRequest::RegisterTransitGatewayRequest()
    : NetworkManagerRequest(new RegisterTransitGatewayRequestPrivate(NetworkManagerRequest::RegisterTransitGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterTransitGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterTransitGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterTransitGatewayRequest::response(QNetworkReply * const reply) const
{
    return new RegisterTransitGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::RegisterTransitGatewayRequestPrivate
 * \brief The RegisterTransitGatewayRequestPrivate class provides private implementation for RegisterTransitGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a RegisterTransitGatewayRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
RegisterTransitGatewayRequestPrivate::RegisterTransitGatewayRequestPrivate(
    const NetworkManagerRequest::Action action, RegisterTransitGatewayRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterTransitGatewayRequest
 * class' copy constructor.
 */
RegisterTransitGatewayRequestPrivate::RegisterTransitGatewayRequestPrivate(
    const RegisterTransitGatewayRequestPrivate &other, RegisterTransitGatewayRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
