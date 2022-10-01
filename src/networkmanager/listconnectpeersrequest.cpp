// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconnectpeersrequest.h"
#include "listconnectpeersrequest_p.h"
#include "listconnectpeersresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListConnectPeersRequest
 * \brief The ListConnectPeersRequest class provides an interface for NetworkManager ListConnectPeers requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listConnectPeers
 */

/*!
 * Constructs a copy of \a other.
 */
ListConnectPeersRequest::ListConnectPeersRequest(const ListConnectPeersRequest &other)
    : NetworkManagerRequest(new ListConnectPeersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConnectPeersRequest object.
 */
ListConnectPeersRequest::ListConnectPeersRequest()
    : NetworkManagerRequest(new ListConnectPeersRequestPrivate(NetworkManagerRequest::ListConnectPeersAction, this))
{

}

/*!
 * \reimp
 */
bool ListConnectPeersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConnectPeersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConnectPeersRequest::response(QNetworkReply * const reply) const
{
    return new ListConnectPeersResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::ListConnectPeersRequestPrivate
 * \brief The ListConnectPeersRequestPrivate class provides private implementation for ListConnectPeersRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListConnectPeersRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
ListConnectPeersRequestPrivate::ListConnectPeersRequestPrivate(
    const NetworkManagerRequest::Action action, ListConnectPeersRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConnectPeersRequest
 * class' copy constructor.
 */
ListConnectPeersRequestPrivate::ListConnectPeersRequestPrivate(
    const ListConnectPeersRequestPrivate &other, ListConnectPeersRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
