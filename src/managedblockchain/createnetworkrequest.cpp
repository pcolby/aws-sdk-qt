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

#include "createnetworkrequest.h"
#include "createnetworkrequest_p.h"
#include "createnetworkresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::CreateNetworkRequest
 * \brief The CreateNetworkRequest class provides an interface for ManagedBlockchain CreateNetwork requests.
 *
 * \inmodule QtAwsManagedBlockchain
 *
 *  <p/>
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central authority. Currently, Managed Blockchain supports
 *  the Hyperledger Fabric open source framework.
 *
 * \sa ManagedBlockchainClient::createNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNetworkRequest::CreateNetworkRequest(const CreateNetworkRequest &other)
    : ManagedBlockchainRequest(new CreateNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNetworkRequest object.
 */
CreateNetworkRequest::CreateNetworkRequest()
    : ManagedBlockchainRequest(new CreateNetworkRequestPrivate(ManagedBlockchainRequest::CreateNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNetworkRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::CreateNetworkRequestPrivate
 * \brief The CreateNetworkRequestPrivate class provides private implementation for CreateNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a CreateNetworkRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
CreateNetworkRequestPrivate::CreateNetworkRequestPrivate(
    const ManagedBlockchainRequest::Action action, CreateNetworkRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkRequest
 * class' copy constructor.
 */
CreateNetworkRequestPrivate::CreateNetworkRequestPrivate(
    const CreateNetworkRequestPrivate &other, CreateNetworkRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
