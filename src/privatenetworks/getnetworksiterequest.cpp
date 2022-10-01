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

#include "getnetworksiterequest.h"
#include "getnetworksiterequest_p.h"
#include "getnetworksiteresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkSiteRequest
 * \brief The GetNetworkSiteRequest class provides an interface for PrivateNetworks GetNetworkSite requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetworkSite
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkSiteRequest::GetNetworkSiteRequest(const GetNetworkSiteRequest &other)
    : PrivateNetworksRequest(new GetNetworkSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkSiteRequest object.
 */
GetNetworkSiteRequest::GetNetworkSiteRequest()
    : PrivateNetworksRequest(new GetNetworkSiteRequestPrivate(PrivateNetworksRequest::GetNetworkSiteAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkSiteRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkSiteResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkSiteRequestPrivate
 * \brief The GetNetworkSiteRequestPrivate class provides private implementation for GetNetworkSiteRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkSiteRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
GetNetworkSiteRequestPrivate::GetNetworkSiteRequestPrivate(
    const PrivateNetworksRequest::Action action, GetNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkSiteRequest
 * class' copy constructor.
 */
GetNetworkSiteRequestPrivate::GetNetworkSiteRequestPrivate(
    const GetNetworkSiteRequestPrivate &other, GetNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
