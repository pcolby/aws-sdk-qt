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

#include "getsitesrequest.h"
#include "getsitesrequest_p.h"
#include "getsitesresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetSitesRequest
 * \brief The GetSitesRequest class provides an interface for NetworkManager GetSites requests.
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
 * \sa NetworkManagerClient::getSites
 */

/*!
 * Constructs a copy of \a other.
 */
GetSitesRequest::GetSitesRequest(const GetSitesRequest &other)
    : NetworkManagerRequest(new GetSitesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSitesRequest object.
 */
GetSitesRequest::GetSitesRequest()
    : NetworkManagerRequest(new GetSitesRequestPrivate(NetworkManagerRequest::GetSitesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSitesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSitesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSitesRequest::response(QNetworkReply * const reply) const
{
    return new GetSitesResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetSitesRequestPrivate
 * \brief The GetSitesRequestPrivate class provides private implementation for GetSitesRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetSitesRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetSitesRequestPrivate::GetSitesRequestPrivate(
    const NetworkManagerRequest::Action action, GetSitesRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSitesRequest
 * class' copy constructor.
 */
GetSitesRequestPrivate::GetSitesRequestPrivate(
    const GetSitesRequestPrivate &other, GetSitesRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
