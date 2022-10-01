// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectionrequest.h"
#include "createconnectionrequest_p.h"
#include "createconnectionresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateConnectionRequest
 * \brief The CreateConnectionRequest class provides an interface for NetworkManager CreateConnection requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createConnection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectionRequest::CreateConnectionRequest(const CreateConnectionRequest &other)
    : NetworkManagerRequest(new CreateConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectionRequest object.
 */
CreateConnectionRequest::CreateConnectionRequest()
    : NetworkManagerRequest(new CreateConnectionRequestPrivate(NetworkManagerRequest::CreateConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateConnectionRequestPrivate
 * \brief The CreateConnectionRequestPrivate class provides private implementation for CreateConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateConnectionRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateConnectionRequestPrivate::CreateConnectionRequestPrivate(
    const NetworkManagerRequest::Action action, CreateConnectionRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectionRequest
 * class' copy constructor.
 */
CreateConnectionRequestPrivate::CreateConnectionRequestPrivate(
    const CreateConnectionRequestPrivate &other, CreateConnectionRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
