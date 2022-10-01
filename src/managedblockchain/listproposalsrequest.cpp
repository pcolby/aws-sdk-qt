// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listproposalsrequest.h"
#include "listproposalsrequest_p.h"
#include "listproposalsresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListProposalsRequest
 * \brief The ListProposalsRequest class provides an interface for ManagedBlockchain ListProposals requests.
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
 * \sa ManagedBlockchainClient::listProposals
 */

/*!
 * Constructs a copy of \a other.
 */
ListProposalsRequest::ListProposalsRequest(const ListProposalsRequest &other)
    : ManagedBlockchainRequest(new ListProposalsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProposalsRequest object.
 */
ListProposalsRequest::ListProposalsRequest()
    : ManagedBlockchainRequest(new ListProposalsRequestPrivate(ManagedBlockchainRequest::ListProposalsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProposalsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProposalsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProposalsRequest::response(QNetworkReply * const reply) const
{
    return new ListProposalsResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::ListProposalsRequestPrivate
 * \brief The ListProposalsRequestPrivate class provides private implementation for ListProposalsRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListProposalsRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
ListProposalsRequestPrivate::ListProposalsRequestPrivate(
    const ManagedBlockchainRequest::Action action, ListProposalsRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProposalsRequest
 * class' copy constructor.
 */
ListProposalsRequestPrivate::ListProposalsRequestPrivate(
    const ListProposalsRequestPrivate &other, ListProposalsRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
