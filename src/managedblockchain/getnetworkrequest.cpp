// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
