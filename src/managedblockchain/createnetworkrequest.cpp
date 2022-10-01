// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnetworkrequest.h"
#include "createnetworkrequest_p.h"
#include "createnetworkresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::CreateNetworkRequest
 * \brief The CreateNetworkRequest class provides an interface for ManagedBlockchain CreateNetwork requests.
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
 * \sa ManagedBlockchainClient::createNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNetworkRequest::CreateNetworkRequest(const CreateNetworkRequest &other)
    : ManagedBlockchainRequest(new CreateNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNetworkRequest object.
 */
CreateNetworkRequest::CreateNetworkRequest()
    : ManagedBlockchainRequest(new CreateNetworkRequestPrivate(ManagedBlockchainRequest::CreateNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNetworkRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::CreateNetworkRequestPrivate
 * \brief The CreateNetworkRequestPrivate class provides private implementation for CreateNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a CreateNetworkRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
CreateNetworkRequestPrivate::CreateNetworkRequestPrivate(
    const ManagedBlockchainRequest::Action action, CreateNetworkRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkRequest
 * class' copy constructor.
 */
CreateNetworkRequestPrivate::CreateNetworkRequestPrivate(
    const CreateNetworkRequestPrivate &other, CreateNetworkRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
