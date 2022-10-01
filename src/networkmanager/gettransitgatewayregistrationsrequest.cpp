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

#include "gettransitgatewayregistrationsrequest.h"
#include "gettransitgatewayregistrationsrequest_p.h"
#include "gettransitgatewayregistrationsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRegistrationsRequest
 * \brief The GetTransitGatewayRegistrationsRequest class provides an interface for NetworkManager GetTransitGatewayRegistrations requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getTransitGatewayRegistrations
 */

/*!
 * Constructs a copy of \a other.
 */
GetTransitGatewayRegistrationsRequest::GetTransitGatewayRegistrationsRequest(const GetTransitGatewayRegistrationsRequest &other)
    : NetworkManagerRequest(new GetTransitGatewayRegistrationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTransitGatewayRegistrationsRequest object.
 */
GetTransitGatewayRegistrationsRequest::GetTransitGatewayRegistrationsRequest()
    : NetworkManagerRequest(new GetTransitGatewayRegistrationsRequestPrivate(NetworkManagerRequest::GetTransitGatewayRegistrationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTransitGatewayRegistrationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTransitGatewayRegistrationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTransitGatewayRegistrationsRequest::response(QNetworkReply * const reply) const
{
    return new GetTransitGatewayRegistrationsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRegistrationsRequestPrivate
 * \brief The GetTransitGatewayRegistrationsRequestPrivate class provides private implementation for GetTransitGatewayRegistrationsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetTransitGatewayRegistrationsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetTransitGatewayRegistrationsRequestPrivate::GetTransitGatewayRegistrationsRequestPrivate(
    const NetworkManagerRequest::Action action, GetTransitGatewayRegistrationsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTransitGatewayRegistrationsRequest
 * class' copy constructor.
 */
GetTransitGatewayRegistrationsRequestPrivate::GetTransitGatewayRegistrationsRequestPrivate(
    const GetTransitGatewayRegistrationsRequestPrivate &other, GetTransitGatewayRegistrationsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
