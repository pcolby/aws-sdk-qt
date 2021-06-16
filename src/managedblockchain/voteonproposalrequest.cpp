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

#include "voteonproposalrequest.h"
#include "voteonproposalrequest_p.h"
#include "voteonproposalresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::VoteOnProposalRequest
 * \brief The VoteOnProposalRequest class provides an interface for ManagedBlockchain VoteOnProposal requests.
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
 * \sa ManagedBlockchainClient::voteOnProposal
 */

/*!
 * Constructs a copy of \a other.
 */
VoteOnProposalRequest::VoteOnProposalRequest(const VoteOnProposalRequest &other)
    : ManagedBlockchainRequest(new VoteOnProposalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VoteOnProposalRequest object.
 */
VoteOnProposalRequest::VoteOnProposalRequest()
    : ManagedBlockchainRequest(new VoteOnProposalRequestPrivate(ManagedBlockchainRequest::VoteOnProposalAction, this))
{

}

/*!
 * \reimp
 */
bool VoteOnProposalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VoteOnProposalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VoteOnProposalRequest::response(QNetworkReply * const reply) const
{
    return new VoteOnProposalResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::VoteOnProposalRequestPrivate
 * \brief The VoteOnProposalRequestPrivate class provides private implementation for VoteOnProposalRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a VoteOnProposalRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
VoteOnProposalRequestPrivate::VoteOnProposalRequestPrivate(
    const ManagedBlockchainRequest::Action action, VoteOnProposalRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VoteOnProposalRequest
 * class' copy constructor.
 */
VoteOnProposalRequestPrivate::VoteOnProposalRequestPrivate(
    const VoteOnProposalRequestPrivate &other, VoteOnProposalRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
