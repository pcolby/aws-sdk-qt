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

#include "getcorenetworkchangeeventsrequest.h"
#include "getcorenetworkchangeeventsrequest_p.h"
#include "getcorenetworkchangeeventsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkChangeEventsRequest
 * \brief The GetCoreNetworkChangeEventsRequest class provides an interface for NetworkManager GetCoreNetworkChangeEvents requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCoreNetworkChangeEvents
 */

/*!
 * Constructs a copy of \a other.
 */
GetCoreNetworkChangeEventsRequest::GetCoreNetworkChangeEventsRequest(const GetCoreNetworkChangeEventsRequest &other)
    : NetworkManagerRequest(new GetCoreNetworkChangeEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCoreNetworkChangeEventsRequest object.
 */
GetCoreNetworkChangeEventsRequest::GetCoreNetworkChangeEventsRequest()
    : NetworkManagerRequest(new GetCoreNetworkChangeEventsRequestPrivate(NetworkManagerRequest::GetCoreNetworkChangeEventsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCoreNetworkChangeEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCoreNetworkChangeEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCoreNetworkChangeEventsRequest::response(QNetworkReply * const reply) const
{
    return new GetCoreNetworkChangeEventsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkChangeEventsRequestPrivate
 * \brief The GetCoreNetworkChangeEventsRequestPrivate class provides private implementation for GetCoreNetworkChangeEventsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCoreNetworkChangeEventsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetCoreNetworkChangeEventsRequestPrivate::GetCoreNetworkChangeEventsRequestPrivate(
    const NetworkManagerRequest::Action action, GetCoreNetworkChangeEventsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCoreNetworkChangeEventsRequest
 * class' copy constructor.
 */
GetCoreNetworkChangeEventsRequestPrivate::GetCoreNetworkChangeEventsRequestPrivate(
    const GetCoreNetworkChangeEventsRequestPrivate &other, GetCoreNetworkChangeEventsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
