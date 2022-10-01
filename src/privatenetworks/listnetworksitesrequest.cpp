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

#include "listnetworksitesrequest.h"
#include "listnetworksitesrequest_p.h"
#include "listnetworksitesresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListNetworkSitesRequest
 * \brief The ListNetworkSitesRequest class provides an interface for PrivateNetworks ListNetworkSites requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listNetworkSites
 */

/*!
 * Constructs a copy of \a other.
 */
ListNetworkSitesRequest::ListNetworkSitesRequest(const ListNetworkSitesRequest &other)
    : PrivateNetworksRequest(new ListNetworkSitesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNetworkSitesRequest object.
 */
ListNetworkSitesRequest::ListNetworkSitesRequest()
    : PrivateNetworksRequest(new ListNetworkSitesRequestPrivate(PrivateNetworksRequest::ListNetworkSitesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNetworkSitesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNetworkSitesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNetworkSitesRequest::response(QNetworkReply * const reply) const
{
    return new ListNetworkSitesResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ListNetworkSitesRequestPrivate
 * \brief The ListNetworkSitesRequestPrivate class provides private implementation for ListNetworkSitesRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListNetworkSitesRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ListNetworkSitesRequestPrivate::ListNetworkSitesRequestPrivate(
    const PrivateNetworksRequest::Action action, ListNetworkSitesRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNetworkSitesRequest
 * class' copy constructor.
 */
ListNetworkSitesRequestPrivate::ListNetworkSitesRequestPrivate(
    const ListNetworkSitesRequestPrivate &other, ListNetworkSitesRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
