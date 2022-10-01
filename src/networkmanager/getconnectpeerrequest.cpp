// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectpeerrequest.h"
#include "getconnectpeerrequest_p.h"
#include "getconnectpeerresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectPeerRequest
 * \brief The GetConnectPeerRequest class provides an interface for NetworkManager GetConnectPeer requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getConnectPeer
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectPeerRequest::GetConnectPeerRequest(const GetConnectPeerRequest &other)
    : NetworkManagerRequest(new GetConnectPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectPeerRequest object.
 */
GetConnectPeerRequest::GetConnectPeerRequest()
    : NetworkManagerRequest(new GetConnectPeerRequestPrivate(NetworkManagerRequest::GetConnectPeerAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectPeerRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectPeerResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetConnectPeerRequestPrivate
 * \brief The GetConnectPeerRequestPrivate class provides private implementation for GetConnectPeerRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectPeerRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetConnectPeerRequestPrivate::GetConnectPeerRequestPrivate(
    const NetworkManagerRequest::Action action, GetConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectPeerRequest
 * class' copy constructor.
 */
GetConnectPeerRequestPrivate::GetConnectPeerRequestPrivate(
    const GetConnectPeerRequestPrivate &other, GetConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
