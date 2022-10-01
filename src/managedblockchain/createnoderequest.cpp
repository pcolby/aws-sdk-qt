// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
