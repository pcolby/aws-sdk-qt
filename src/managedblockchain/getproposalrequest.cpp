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

#include "getproposalrequest.h"
#include "getproposalrequest_p.h"
#include "getproposalresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::GetProposalRequest
 * \brief The GetProposalRequest class provides an interface for ManagedBlockchain GetProposal requests.
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
 * \sa ManagedBlockchainClient::getProposal
 */

/*!
 * Constructs a copy of \a other.
 */
GetProposalRequest::GetProposalRequest(const GetProposalRequest &other)
    : ManagedBlockchainRequest(new GetProposalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProposalRequest object.
 */
GetProposalRequest::GetProposalRequest()
    : ManagedBlockchainRequest(new GetProposalRequestPrivate(ManagedBlockchainRequest::GetProposalAction, this))
{

}

/*!
 * \reimp
 */
bool GetProposalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProposalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProposalRequest::response(QNetworkReply * const reply) const
{
    return new GetProposalResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::GetProposalRequestPrivate
 * \brief The GetProposalRequestPrivate class provides private implementation for GetProposalRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a GetProposalRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
GetProposalRequestPrivate::GetProposalRequestPrivate(
    const ManagedBlockchainRequest::Action action, GetProposalRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProposalRequest
 * class' copy constructor.
 */
GetProposalRequestPrivate::GetProposalRequestPrivate(
    const GetProposalRequestPrivate &other, GetProposalRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
