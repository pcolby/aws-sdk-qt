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

#include "createproposalrequest.h"
#include "createproposalrequest_p.h"
#include "createproposalresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::CreateProposalRequest
 * \brief The CreateProposalRequest class provides an interface for ManagedBlockchain CreateProposal requests.
 *
 * \inmodule QtAwsManagedBlockchain
 *
 *  <p/>
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open-source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central
 * 
 *  authority>
 * 
 *  Managed Blockchain supports the Hyperledger Fabric and Ethereum open-source frameworks. Because of fundamental
 *  differences between the frameworks, some API actions or data types may only apply in the context of one framework and
 *  not the other. For example, actions related to Hyperledger Fabric network members such as <code>CreateMember</code> and
 *  <code>DeleteMember</code> do not apply to
 * 
 *  Ethereum>
 * 
 *  The description for each action indicates the framework or frameworks to which it applies. Data types and properties
 *  that apply only in the context of a particular framework are similarly
 *
 * \sa ManagedBlockchainClient::createProposal
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProposalRequest::CreateProposalRequest(const CreateProposalRequest &other)
    : ManagedBlockchainRequest(new CreateProposalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProposalRequest object.
 */
CreateProposalRequest::CreateProposalRequest()
    : ManagedBlockchainRequest(new CreateProposalRequestPrivate(ManagedBlockchainRequest::CreateProposalAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProposalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProposalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProposalRequest::response(QNetworkReply * const reply) const
{
    return new CreateProposalResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::CreateProposalRequestPrivate
 * \brief The CreateProposalRequestPrivate class provides private implementation for CreateProposalRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a CreateProposalRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
CreateProposalRequestPrivate::CreateProposalRequestPrivate(
    const ManagedBlockchainRequest::Action action, CreateProposalRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProposalRequest
 * class' copy constructor.
 */
CreateProposalRequestPrivate::CreateProposalRequestPrivate(
    const CreateProposalRequestPrivate &other, CreateProposalRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
