// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectionrequest.h"
#include "updateconnectionrequest_p.h"
#include "updateconnectionresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateConnectionRequest
 * \brief The UpdateConnectionRequest class provides an interface for NetworkManager UpdateConnection requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateConnection
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectionRequest::UpdateConnectionRequest(const UpdateConnectionRequest &other)
    : NetworkManagerRequest(new UpdateConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectionRequest object.
 */
UpdateConnectionRequest::UpdateConnectionRequest()
    : NetworkManagerRequest(new UpdateConnectionRequestPrivate(NetworkManagerRequest::UpdateConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::UpdateConnectionRequestPrivate
 * \brief The UpdateConnectionRequestPrivate class provides private implementation for UpdateConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateConnectionRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
UpdateConnectionRequestPrivate::UpdateConnectionRequestPrivate(
    const NetworkManagerRequest::Action action, UpdateConnectionRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectionRequest
 * class' copy constructor.
 */
UpdateConnectionRequestPrivate::UpdateConnectionRequestPrivate(
    const UpdateConnectionRequestPrivate &other, UpdateConnectionRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
