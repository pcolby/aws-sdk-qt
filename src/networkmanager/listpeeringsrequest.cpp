// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
