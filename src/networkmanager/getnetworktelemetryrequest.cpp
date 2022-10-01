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

#include "getnetworktelemetryrequest.h"
#include "getnetworktelemetryrequest_p.h"
#include "getnetworktelemetryresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkTelemetryRequest
 * \brief The GetNetworkTelemetryRequest class provides an interface for NetworkManager GetNetworkTelemetry requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkTelemetry
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkTelemetryRequest::GetNetworkTelemetryRequest(const GetNetworkTelemetryRequest &other)
    : NetworkManagerRequest(new GetNetworkTelemetryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkTelemetryRequest object.
 */
GetNetworkTelemetryRequest::GetNetworkTelemetryRequest()
    : NetworkManagerRequest(new GetNetworkTelemetryRequestPrivate(NetworkManagerRequest::GetNetworkTelemetryAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkTelemetryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkTelemetryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkTelemetryRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkTelemetryResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetNetworkTelemetryRequestPrivate
 * \brief The GetNetworkTelemetryRequestPrivate class provides private implementation for GetNetworkTelemetryRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkTelemetryRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetNetworkTelemetryRequestPrivate::GetNetworkTelemetryRequestPrivate(
    const NetworkManagerRequest::Action action, GetNetworkTelemetryRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkTelemetryRequest
 * class' copy constructor.
 */
GetNetworkTelemetryRequestPrivate::GetNetworkTelemetryRequestPrivate(
    const GetNetworkTelemetryRequestPrivate &other, GetNetworkTelemetryRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
