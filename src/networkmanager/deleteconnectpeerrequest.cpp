// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectpeerrequest.h"
#include "deleteconnectpeerrequest_p.h"
#include "deleteconnectpeerresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteConnectPeerRequest
 * \brief The DeleteConnectPeerRequest class provides an interface for NetworkManager DeleteConnectPeer requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteConnectPeer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectPeerRequest::DeleteConnectPeerRequest(const DeleteConnectPeerRequest &other)
    : NetworkManagerRequest(new DeleteConnectPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectPeerRequest object.
 */
DeleteConnectPeerRequest::DeleteConnectPeerRequest()
    : NetworkManagerRequest(new DeleteConnectPeerRequestPrivate(NetworkManagerRequest::DeleteConnectPeerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectPeerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectPeerResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteConnectPeerRequestPrivate
 * \brief The DeleteConnectPeerRequestPrivate class provides private implementation for DeleteConnectPeerRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteConnectPeerRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteConnectPeerRequestPrivate::DeleteConnectPeerRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectPeerRequest
 * class' copy constructor.
 */
DeleteConnectPeerRequestPrivate::DeleteConnectPeerRequestPrivate(
    const DeleteConnectPeerRequestPrivate &other, DeleteConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
