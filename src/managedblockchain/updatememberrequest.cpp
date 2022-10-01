/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
