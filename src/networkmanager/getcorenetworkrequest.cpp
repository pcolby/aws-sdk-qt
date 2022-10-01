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

#include "getcorenetworkrequest.h"
#include "getcorenetworkrequest_p.h"
#include "getcorenetworkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkRequest
 * \brief The GetCoreNetworkRequest class provides an interface for NetworkManager GetCoreNetwork requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCoreNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
GetCoreNetworkRequest::GetCoreNetworkRequest(const GetCoreNetworkRequest &other)
    : NetworkManagerRequest(new GetCoreNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCoreNetworkRequest object.
 */
GetCoreNetworkRequest::GetCoreNetworkRequest()
    : NetworkManagerRequest(new GetCoreNetworkRequestPrivate(NetworkManagerRequest::GetCoreNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool GetCoreNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCoreNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCoreNetworkRequest::response(QNetworkReply * const reply) const
{
    return new GetCoreNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkRequestPrivate
 * \brief The GetCoreNetworkRequestPrivate class provides private implementation for GetCoreNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCoreNetworkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetCoreNetworkRequestPrivate::GetCoreNetworkRequestPrivate(
    const NetworkManagerRequest::Action action, GetCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCoreNetworkRequest
 * class' copy constructor.
 */
GetCoreNetworkRequestPrivate::GetCoreNetworkRequestPrivate(
    const GetCoreNetworkRequestPrivate &other, GetCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
