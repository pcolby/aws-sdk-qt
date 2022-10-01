// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatememberrequest.h"
#include "updatememberrequest_p.h"
#include "updatememberresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::UpdateMemberRequest
 * \brief The UpdateMemberRequest class provides an interface for ManagedBlockchain UpdateMember requests.
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
 * \sa ManagedBlockchainClient::updateMember
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMemberRequest::UpdateMemberRequest(const UpdateMemberRequest &other)
    : ManagedBlockchainRequest(new UpdateMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMemberRequest object.
 */
UpdateMemberRequest::UpdateMemberRequest()
    : ManagedBlockchainRequest(new UpdateMemberRequestPrivate(ManagedBlockchainRequest::UpdateMemberAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMemberRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMemberResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::UpdateMemberRequestPrivate
 * \brief The UpdateMemberRequestPrivate class provides private implementation for UpdateMemberRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a UpdateMemberRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
UpdateMemberRequestPrivate::UpdateMemberRequestPrivate(
    const ManagedBlockchainRequest::Action action, UpdateMemberRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMemberRequest
 * class' copy constructor.
 */
UpdateMemberRequestPrivate::UpdateMemberRequestPrivate(
    const UpdateMemberRequestPrivate &other, UpdateMemberRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
