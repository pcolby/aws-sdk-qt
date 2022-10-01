// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkresourcecountsrequest.h"
#include "getnetworkresourcecountsrequest_p.h"
#include "getnetworkresourcecountsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceCountsRequest
 * \brief The GetNetworkResourceCountsRequest class provides an interface for NetworkManager GetNetworkResourceCounts requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkResourceCounts
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkResourceCountsRequest::GetNetworkResourceCountsRequest(const GetNetworkResourceCountsRequest &other)
    : NetworkManagerRequest(new GetNetworkResourceCountsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkResourceCountsRequest object.
 */
GetNetworkResourceCountsRequest::GetNetworkResourceCountsRequest()
    : NetworkManagerRequest(new GetNetworkResourceCountsRequestPrivate(NetworkManagerRequest::GetNetworkResourceCountsAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkResourceCountsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkResourceCountsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkResourceCountsRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkResourceCountsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceCountsRequestPrivate
 * \brief The GetNetworkResourceCountsRequestPrivate class provides private implementation for GetNetworkResourceCountsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkResourceCountsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetNetworkResourceCountsRequestPrivate::GetNetworkResourceCountsRequestPrivate(
    const NetworkManagerRequest::Action action, GetNetworkResourceCountsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkResourceCountsRequest
 * class' copy constructor.
 */
GetNetworkResourceCountsRequestPrivate::GetNetworkResourceCountsRequestPrivate(
    const GetNetworkResourceCountsRequestPrivate &other, GetNetworkResourceCountsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
