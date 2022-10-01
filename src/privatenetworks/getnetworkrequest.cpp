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

#include "getnetworkrequest.h"
#include "getnetworkrequest_p.h"
#include "getnetworkresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkRequest
 * \brief The GetNetworkRequest class provides an interface for PrivateNetworks GetNetwork requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkRequest::GetNetworkRequest(const GetNetworkRequest &other)
    : PrivateNetworksRequest(new GetNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkRequest object.
 */
GetNetworkRequest::GetNetworkRequest()
    : PrivateNetworksRequest(new GetNetworkRequestPrivate(PrivateNetworksRequest::GetNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkRequestPrivate
 * \brief The GetNetworkRequestPrivate class provides private implementation for GetNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
GetNetworkRequestPrivate::GetNetworkRequestPrivate(
    const PrivateNetworksRequest::Action action, GetNetworkRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkRequest
 * class' copy constructor.
 */
GetNetworkRequestPrivate::GetNetworkRequestPrivate(
    const GetNetworkRequestPrivate &other, GetNetworkRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
