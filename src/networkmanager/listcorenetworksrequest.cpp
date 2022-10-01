// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
