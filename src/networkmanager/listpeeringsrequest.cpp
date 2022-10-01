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

#include "listpeeringsrequest.h"
#include "listpeeringsrequest_p.h"
#include "listpeeringsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListPeeringsRequest
 * \brief The ListPeeringsRequest class provides an interface for NetworkManager ListPeerings requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listPeerings
 */

/*!
 * Constructs a copy of \a other.
 */
ListPeeringsRequest::ListPeeringsRequest(const ListPeeringsRequest &other)
    : NetworkManagerRequest(new ListPeeringsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPeeringsRequest object.
 */
ListPeeringsRequest::ListPeeringsRequest()
    : NetworkManagerRequest(new ListPeeringsRequestPrivate(NetworkManagerRequest::ListPeeringsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPeeringsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPeeringsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPeeringsRequest::response(QNetworkReply * const reply) const
{
    return new ListPeeringsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::ListPeeringsRequestPrivate
 * \brief The ListPeeringsRequestPrivate class provides private implementation for ListPeeringsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListPeeringsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
ListPeeringsRequestPrivate::ListPeeringsRequestPrivate(
    const NetworkManagerRequest::Action action, ListPeeringsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPeeringsRequest
 * class' copy constructor.
 */
ListPeeringsRequestPrivate::ListPeeringsRequestPrivate(
    const ListPeeringsRequestPrivate &other, ListPeeringsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
