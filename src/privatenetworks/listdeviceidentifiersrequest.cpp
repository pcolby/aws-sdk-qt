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

#include "listdeviceidentifiersrequest.h"
#include "listdeviceidentifiersrequest_p.h"
#include "listdeviceidentifiersresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListDeviceIdentifiersRequest
 * \brief The ListDeviceIdentifiersRequest class provides an interface for PrivateNetworks ListDeviceIdentifiers requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listDeviceIdentifiers
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceIdentifiersRequest::ListDeviceIdentifiersRequest(const ListDeviceIdentifiersRequest &other)
    : PrivateNetworksRequest(new ListDeviceIdentifiersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceIdentifiersRequest object.
 */
ListDeviceIdentifiersRequest::ListDeviceIdentifiersRequest()
    : PrivateNetworksRequest(new ListDeviceIdentifiersRequestPrivate(PrivateNetworksRequest::ListDeviceIdentifiersAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceIdentifiersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceIdentifiersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceIdentifiersRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceIdentifiersResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ListDeviceIdentifiersRequestPrivate
 * \brief The ListDeviceIdentifiersRequestPrivate class provides private implementation for ListDeviceIdentifiersRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListDeviceIdentifiersRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ListDeviceIdentifiersRequestPrivate::ListDeviceIdentifiersRequestPrivate(
    const PrivateNetworksRequest::Action action, ListDeviceIdentifiersRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceIdentifiersRequest
 * class' copy constructor.
 */
ListDeviceIdentifiersRequestPrivate::ListDeviceIdentifiersRequestPrivate(
    const ListDeviceIdentifiersRequestPrivate &other, ListDeviceIdentifiersRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
