// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnetworksrequest.h"
#include "listnetworksrequest_p.h"
#include "listnetworksresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListNetworksRequest
 * \brief The ListNetworksRequest class provides an interface for ManagedBlockchain ListNetworks requests.
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
 * \sa ManagedBlockchainClient::listNetworks
 */

/*!
 * Constructs a copy of \a other.
 */
ListNetworksRequest::ListNetworksRequest(const ListNetworksRequest &other)
    : ManagedBlockchainRequest(new ListNetworksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNetworksRequest object.
 */
ListNetworksRequest::ListNetworksRequest()
    : ManagedBlockchainRequest(new ListNetworksRequestPrivate(ManagedBlockchainRequest::ListNetworksAction, this))
{

}

/*!
 * \reimp
 */
bool ListNetworksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNetworksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNetworksRequest::response(QNetworkReply * const reply) const
{
    return new ListNetworksResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::ListNetworksRequestPrivate
 * \brief The ListNetworksRequestPrivate class provides private implementation for ListNetworksRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListNetworksRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
ListNetworksRequestPrivate::ListNetworksRequestPrivate(
    const ManagedBlockchainRequest::Action action, ListNetworksRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNetworksRequest
 * class' copy constructor.
 */
ListNetworksRequestPrivate::ListNetworksRequestPrivate(
    const ListNetworksRequestPrivate &other, ListNetworksRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
