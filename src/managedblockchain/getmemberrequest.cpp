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

#include "getmemberrequest.h"
#include "getmemberrequest_p.h"
#include "getmemberresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::GetMemberRequest
 * \brief The GetMemberRequest class provides an interface for ManagedBlockchain GetMember requests.
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
 * \sa ManagedBlockchainClient::getMember
 */

/*!
 * Constructs a copy of \a other.
 */
GetMemberRequest::GetMemberRequest(const GetMemberRequest &other)
    : ManagedBlockchainRequest(new GetMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMemberRequest object.
 */
GetMemberRequest::GetMemberRequest()
    : ManagedBlockchainRequest(new GetMemberRequestPrivate(ManagedBlockchainRequest::GetMemberAction, this))
{

}

/*!
 * \reimp
 */
bool GetMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMemberRequest::response(QNetworkReply * const reply) const
{
    return new GetMemberResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::GetMemberRequestPrivate
 * \brief The GetMemberRequestPrivate class provides private implementation for GetMemberRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a GetMemberRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
GetMemberRequestPrivate::GetMemberRequestPrivate(
    const ManagedBlockchainRequest::Action action, GetMemberRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMemberRequest
 * class' copy constructor.
 */
GetMemberRequestPrivate::GetMemberRequestPrivate(
    const GetMemberRequestPrivate &other, GetMemberRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
