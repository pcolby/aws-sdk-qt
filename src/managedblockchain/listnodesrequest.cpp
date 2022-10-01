// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnodesrequest.h"
#include "listnodesrequest_p.h"
#include "listnodesresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListNodesRequest
 * \brief The ListNodesRequest class provides an interface for ManagedBlockchain ListNodes requests.
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
 * \sa ManagedBlockchainClient::listNodes
 */

/*!
 * Constructs a copy of \a other.
 */
ListNodesRequest::ListNodesRequest(const ListNodesRequest &other)
    : ManagedBlockchainRequest(new ListNodesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNodesRequest object.
 */
ListNodesRequest::ListNodesRequest()
    : ManagedBlockchainRequest(new ListNodesRequestPrivate(ManagedBlockchainRequest::ListNodesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNodesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNodesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNodesRequest::response(QNetworkReply * const reply) const
{
    return new ListNodesResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::ListNodesRequestPrivate
 * \brief The ListNodesRequestPrivate class provides private implementation for ListNodesRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListNodesRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
ListNodesRequestPrivate::ListNodesRequestPrivate(
    const ManagedBlockchainRequest::Action action, ListNodesRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNodesRequest
 * class' copy constructor.
 */
ListNodesRequestPrivate::ListNodesRequestPrivate(
    const ListNodesRequestPrivate &other, ListNodesRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
