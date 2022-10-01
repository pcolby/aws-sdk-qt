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

#include "getnetworkresourcerequest.h"
#include "getnetworkresourcerequest_p.h"
#include "getnetworkresourceresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkResourceRequest
 * \brief The GetNetworkResourceRequest class provides an interface for PrivateNetworks GetNetworkResource requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetworkResource
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkResourceRequest::GetNetworkResourceRequest(const GetNetworkResourceRequest &other)
    : PrivateNetworksRequest(new GetNetworkResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkResourceRequest object.
 */
GetNetworkResourceRequest::GetNetworkResourceRequest()
    : PrivateNetworksRequest(new GetNetworkResourceRequestPrivate(PrivateNetworksRequest::GetNetworkResourceAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkResourceRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkResourceResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkResourceRequestPrivate
 * \brief The GetNetworkResourceRequestPrivate class provides private implementation for GetNetworkResourceRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkResourceRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
GetNetworkResourceRequestPrivate::GetNetworkResourceRequestPrivate(
    const PrivateNetworksRequest::Action action, GetNetworkResourceRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkResourceRequest
 * class' copy constructor.
 */
GetNetworkResourceRequestPrivate::GetNetworkResourceRequestPrivate(
    const GetNetworkResourceRequestPrivate &other, GetNetworkResourceRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
