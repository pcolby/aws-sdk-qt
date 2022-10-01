// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creatememberrequest.h"
#include "creatememberrequest_p.h"
#include "creatememberresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::CreateMemberRequest
 * \brief The CreateMemberRequest class provides an interface for ManagedBlockchain CreateMember requests.
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
 * \sa ManagedBlockchainClient::createMember
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMemberRequest::CreateMemberRequest(const CreateMemberRequest &other)
    : ManagedBlockchainRequest(new CreateMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMemberRequest object.
 */
CreateMemberRequest::CreateMemberRequest()
    : ManagedBlockchainRequest(new CreateMemberRequestPrivate(ManagedBlockchainRequest::CreateMemberAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMemberRequest::response(QNetworkReply * const reply) const
{
    return new CreateMemberResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::CreateMemberRequestPrivate
 * \brief The CreateMemberRequestPrivate class provides private implementation for CreateMemberRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a CreateMemberRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
CreateMemberRequestPrivate::CreateMemberRequestPrivate(
    const ManagedBlockchainRequest::Action action, CreateMemberRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMemberRequest
 * class' copy constructor.
 */
CreateMemberRequestPrivate::CreateMemberRequestPrivate(
    const CreateMemberRequestPrivate &other, CreateMemberRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
