// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectpeerrequest.h"
#include "createconnectpeerrequest_p.h"
#include "createconnectpeerresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateConnectPeerRequest
 * \brief The CreateConnectPeerRequest class provides an interface for NetworkManager CreateConnectPeer requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createConnectPeer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectPeerRequest::CreateConnectPeerRequest(const CreateConnectPeerRequest &other)
    : NetworkManagerRequest(new CreateConnectPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectPeerRequest object.
 */
CreateConnectPeerRequest::CreateConnectPeerRequest()
    : NetworkManagerRequest(new CreateConnectPeerRequestPrivate(NetworkManagerRequest::CreateConnectPeerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectPeerRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectPeerResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateConnectPeerRequestPrivate
 * \brief The CreateConnectPeerRequestPrivate class provides private implementation for CreateConnectPeerRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateConnectPeerRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateConnectPeerRequestPrivate::CreateConnectPeerRequestPrivate(
    const NetworkManagerRequest::Action action, CreateConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectPeerRequest
 * class' copy constructor.
 */
CreateConnectPeerRequestPrivate::CreateConnectPeerRequestPrivate(
    const CreateConnectPeerRequestPrivate &other, CreateConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
