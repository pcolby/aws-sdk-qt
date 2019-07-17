/*
    Copyright 2013-2019 Paul Colby

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

#include "deletememberrequest.h"
#include "deletememberrequest_p.h"
#include "deletememberresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::DeleteMemberRequest
 * \brief The DeleteMemberRequest class provides an interface for ManagedBlockchain DeleteMember requests.
 *
 * \inmodule QtAwsManagedBlockchain
 *
 *  <p/>
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central authority. Currently, Managed Blockchain supports
 *  the Hyperledger Fabric open source framework.
 *
 * \sa ManagedBlockchainClient::deleteMember
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMemberRequest::DeleteMemberRequest(const DeleteMemberRequest &other)
    : ManagedBlockchainRequest(new DeleteMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMemberRequest object.
 */
DeleteMemberRequest::DeleteMemberRequest()
    : ManagedBlockchainRequest(new DeleteMemberRequestPrivate(ManagedBlockchainRequest::DeleteMemberAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMemberRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMemberResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::DeleteMemberRequestPrivate
 * \brief The DeleteMemberRequestPrivate class provides private implementation for DeleteMemberRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a DeleteMemberRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
DeleteMemberRequestPrivate::DeleteMemberRequestPrivate(
    const ManagedBlockchainRequest::Action action, DeleteMemberRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMemberRequest
 * class' copy constructor.
 */
DeleteMemberRequestPrivate::DeleteMemberRequestPrivate(
    const DeleteMemberRequestPrivate &other, DeleteMemberRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
