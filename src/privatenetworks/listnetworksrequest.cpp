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

#include "listnetworksrequest.h"
#include "listnetworksrequest_p.h"
#include "listnetworksresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListNetworksRequest
 * \brief The ListNetworksRequest class provides an interface for PrivateNetworks ListNetworks requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listNetworks
 */

/*!
 * Constructs a copy of \a other.
 */
ListNetworksRequest::ListNetworksRequest(const ListNetworksRequest &other)
    : PrivateNetworksRequest(new ListNetworksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNetworksRequest object.
 */
ListNetworksRequest::ListNetworksRequest()
    : PrivateNetworksRequest(new ListNetworksRequestPrivate(PrivateNetworksRequest::ListNetworksAction, this))
{

}

/*!
 * \reimp
 */
bool ListNetworksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNetworksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNetworksRequest::response(QNetworkReply * const reply) const
{
    return new ListNetworksResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ListNetworksRequestPrivate
 * \brief The ListNetworksRequestPrivate class provides private implementation for ListNetworksRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListNetworksRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ListNetworksRequestPrivate::ListNetworksRequestPrivate(
    const PrivateNetworksRequest::Action action, ListNetworksRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNetworksRequest
 * class' copy constructor.
 */
ListNetworksRequestPrivate::ListNetworksRequestPrivate(
    const ListNetworksRequestPrivate &other, ListNetworksRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
