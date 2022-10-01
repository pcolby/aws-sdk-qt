// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectionrequest.h"
#include "deleteconnectionrequest_p.h"
#include "deleteconnectionresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteConnectionRequest
 * \brief The DeleteConnectionRequest class provides an interface for NetworkManager DeleteConnection requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteConnection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectionRequest::DeleteConnectionRequest(const DeleteConnectionRequest &other)
    : NetworkManagerRequest(new DeleteConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectionRequest object.
 */
DeleteConnectionRequest::DeleteConnectionRequest()
    : NetworkManagerRequest(new DeleteConnectionRequestPrivate(NetworkManagerRequest::DeleteConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteConnectionRequestPrivate
 * \brief The DeleteConnectionRequestPrivate class provides private implementation for DeleteConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteConnectionRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteConnectionRequestPrivate::DeleteConnectionRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteConnectionRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectionRequest
 * class' copy constructor.
 */
DeleteConnectionRequestPrivate::DeleteConnectionRequestPrivate(
    const DeleteConnectionRequestPrivate &other, DeleteConnectionRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
