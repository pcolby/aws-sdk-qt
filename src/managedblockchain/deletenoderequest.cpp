// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenoderequest.h"
#include "deletenoderequest_p.h"
#include "deletenoderesponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::DeleteNodeRequest
 * \brief The DeleteNodeRequest class provides an interface for ManagedBlockchain DeleteNode requests.
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
 * \sa ManagedBlockchainClient::deleteNode
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNodeRequest::DeleteNodeRequest(const DeleteNodeRequest &other)
    : ManagedBlockchainRequest(new DeleteNodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNodeRequest object.
 */
DeleteNodeRequest::DeleteNodeRequest()
    : ManagedBlockchainRequest(new DeleteNodeRequestPrivate(ManagedBlockchainRequest::DeleteNodeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNodeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNodeResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::DeleteNodeRequestPrivate
 * \brief The DeleteNodeRequestPrivate class provides private implementation for DeleteNodeRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a DeleteNodeRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
DeleteNodeRequestPrivate::DeleteNodeRequestPrivate(
    const ManagedBlockchainRequest::Action action, DeleteNodeRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNodeRequest
 * class' copy constructor.
 */
DeleteNodeRequestPrivate::DeleteNodeRequestPrivate(
    const DeleteNodeRequestPrivate &other, DeleteNodeRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
