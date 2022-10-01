// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listproposalvotesrequest.h"
#include "listproposalvotesrequest_p.h"
#include "listproposalvotesresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListProposalVotesRequest
 * \brief The ListProposalVotesRequest class provides an interface for ManagedBlockchain ListProposalVotes requests.
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
 * \sa ManagedBlockchainClient::listProposalVotes
 */

/*!
 * Constructs a copy of \a other.
 */
ListProposalVotesRequest::ListProposalVotesRequest(const ListProposalVotesRequest &other)
    : ManagedBlockchainRequest(new ListProposalVotesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProposalVotesRequest object.
 */
ListProposalVotesRequest::ListProposalVotesRequest()
    : ManagedBlockchainRequest(new ListProposalVotesRequestPrivate(ManagedBlockchainRequest::ListProposalVotesAction, this))
{

}

/*!
 * \reimp
 */
bool ListProposalVotesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProposalVotesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProposalVotesRequest::response(QNetworkReply * const reply) const
{
    return new ListProposalVotesResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::ListProposalVotesRequestPrivate
 * \brief The ListProposalVotesRequestPrivate class provides private implementation for ListProposalVotesRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListProposalVotesRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
ListProposalVotesRequestPrivate::ListProposalVotesRequestPrivate(
    const ManagedBlockchainRequest::Action action, ListProposalVotesRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProposalVotesRequest
 * class' copy constructor.
 */
ListProposalVotesRequestPrivate::ListProposalVotesRequestPrivate(
    const ListProposalVotesRequestPrivate &other, ListProposalVotesRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
