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

#include "getnetworkrequest.h"
#include "getnetworkrequest_p.h"
#include "getnetworkresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::GetNetworkRequest
 * \brief The GetNetworkRequest class provides an interface for ManagedBlockchain GetNetwork requests.
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
 * \sa ManagedBlockchainClient::getNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkRequest::GetNetworkRequest(const GetNetworkRequest &other)
    : ManagedBlockchainRequest(new GetNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkRequest object.
 */
GetNetworkRequest::GetNetworkRequest()
    : ManagedBlockchainRequest(new GetNetworkRequestPrivate(ManagedBlockchainRequest::GetNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::GetNetworkRequestPrivate
 * \brief The GetNetworkRequestPrivate class provides private implementation for GetNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a GetNetworkRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
GetNetworkRequestPrivate::GetNetworkRequestPrivate(
    const ManagedBlockchainRequest::Action action, GetNetworkRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkRequest
 * class' copy constructor.
 */
GetNetworkRequestPrivate::GetNetworkRequestPrivate(
    const GetNetworkRequestPrivate &other, GetNetworkRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
