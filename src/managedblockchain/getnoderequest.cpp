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

#include "getnoderequest.h"
#include "getnoderequest_p.h"
#include "getnoderesponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::GetNodeRequest
 * \brief The GetNodeRequest class provides an interface for ManagedBlockchain GetNode requests.
 *
 * \inmodule QtAwsManagedBlockchain
 *
 *  <p/>
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
 * \sa ManagedBlockchainClient::getNode
 */

/*!
 * Constructs a copy of \a other.
 */
GetNodeRequest::GetNodeRequest(const GetNodeRequest &other)
    : ManagedBlockchainRequest(new GetNodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNodeRequest object.
 */
GetNodeRequest::GetNodeRequest()
    : ManagedBlockchainRequest(new GetNodeRequestPrivate(ManagedBlockchainRequest::GetNodeAction, this))
{

}

/*!
 * \reimp
 */
bool GetNodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNodeRequest::response(QNetworkReply * const reply) const
{
    return new GetNodeResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::GetNodeRequestPrivate
 * \brief The GetNodeRequestPrivate class provides private implementation for GetNodeRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a GetNodeRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
GetNodeRequestPrivate::GetNodeRequestPrivate(
    const ManagedBlockchainRequest::Action action, GetNodeRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNodeRequest
 * class' copy constructor.
 */
GetNodeRequestPrivate::GetNodeRequestPrivate(
    const GetNodeRequestPrivate &other, GetNodeRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
