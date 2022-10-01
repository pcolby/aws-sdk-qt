// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getproposalrequest.h"
#include "getproposalrequest_p.h"
#include "getproposalresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::GetProposalRequest
 * \brief The GetProposalRequest class provides an interface for ManagedBlockchain GetProposal requests.
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
 * \sa ManagedBlockchainClient::getProposal
 */

/*!
 * Constructs a copy of \a other.
 */
GetProposalRequest::GetProposalRequest(const GetProposalRequest &other)
    : ManagedBlockchainRequest(new GetProposalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProposalRequest object.
 */
GetProposalRequest::GetProposalRequest()
    : ManagedBlockchainRequest(new GetProposalRequestPrivate(ManagedBlockchainRequest::GetProposalAction, this))
{

}

/*!
 * \reimp
 */
bool GetProposalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProposalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProposalRequest::response(QNetworkReply * const reply) const
{
    return new GetProposalResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::GetProposalRequestPrivate
 * \brief The GetProposalRequestPrivate class provides private implementation for GetProposalRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a GetProposalRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
GetProposalRequestPrivate::GetProposalRequestPrivate(
    const ManagedBlockchainRequest::Action action, GetProposalRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProposalRequest
 * class' copy constructor.
 */
GetProposalRequestPrivate::GetProposalRequestPrivate(
    const GetProposalRequestPrivate &other, GetProposalRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
