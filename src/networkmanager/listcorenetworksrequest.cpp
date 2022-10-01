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

#include "listcorenetworksrequest.h"
#include "listcorenetworksrequest_p.h"
#include "listcorenetworksresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListCoreNetworksRequest
 * \brief The ListCoreNetworksRequest class provides an interface for NetworkManager ListCoreNetworks requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listCoreNetworks
 */

/*!
 * Constructs a copy of \a other.
 */
ListCoreNetworksRequest::ListCoreNetworksRequest(const ListCoreNetworksRequest &other)
    : NetworkManagerRequest(new ListCoreNetworksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCoreNetworksRequest object.
 */
ListCoreNetworksRequest::ListCoreNetworksRequest()
    : NetworkManagerRequest(new ListCoreNetworksRequestPrivate(NetworkManagerRequest::ListCoreNetworksAction, this))
{

}

/*!
 * \reimp
 */
bool ListCoreNetworksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCoreNetworksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCoreNetworksRequest::response(QNetworkReply * const reply) const
{
    return new ListCoreNetworksResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::ListCoreNetworksRequestPrivate
 * \brief The ListCoreNetworksRequestPrivate class provides private implementation for ListCoreNetworksRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListCoreNetworksRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
ListCoreNetworksRequestPrivate::ListCoreNetworksRequestPrivate(
    const NetworkManagerRequest::Action action, ListCoreNetworksRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCoreNetworksRequest
 * class' copy constructor.
 */
ListCoreNetworksRequestPrivate::ListCoreNetworksRequestPrivate(
    const ListCoreNetworksRequestPrivate &other, ListCoreNetworksRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
