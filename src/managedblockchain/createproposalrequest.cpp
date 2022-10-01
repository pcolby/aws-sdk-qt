// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  </p
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
