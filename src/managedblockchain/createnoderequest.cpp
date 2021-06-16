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

#include "createnoderequest.h"
#include "createnoderequest_p.h"
#include "createnoderesponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::CreateNodeRequest
 * \brief The CreateNodeRequest class provides an interface for ManagedBlockchain CreateNode requests.
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
 * \sa ManagedBlockchainClient::createNode
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNodeRequest::CreateNodeRequest(const CreateNodeRequest &other)
    : ManagedBlockchainRequest(new CreateNodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNodeRequest object.
 */
CreateNodeRequest::CreateNodeRequest()
    : ManagedBlockchainRequest(new CreateNodeRequestPrivate(ManagedBlockchainRequest::CreateNodeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNodeRequest::response(QNetworkReply * const reply) const
{
    return new CreateNodeResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::CreateNodeRequestPrivate
 * \brief The CreateNodeRequestPrivate class provides private implementation for CreateNodeRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a CreateNodeRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
CreateNodeRequestPrivate::CreateNodeRequestPrivate(
    const ManagedBlockchainRequest::Action action, CreateNodeRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNodeRequest
 * class' copy constructor.
 */
CreateNodeRequestPrivate::CreateNodeRequestPrivate(
    const CreateNodeRequestPrivate &other, CreateNodeRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
