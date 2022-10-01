// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkresourcesrequest.h"
#include "getnetworkresourcesrequest_p.h"
#include "getnetworkresourcesresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkResourcesRequest
 * \brief The GetNetworkResourcesRequest class provides an interface for NetworkManager GetNetworkResources requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkResources
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkResourcesRequest::GetNetworkResourcesRequest(const GetNetworkResourcesRequest &other)
    : NetworkManagerRequest(new GetNetworkResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkResourcesRequest object.
 */
GetNetworkResourcesRequest::GetNetworkResourcesRequest()
    : NetworkManagerRequest(new GetNetworkResourcesRequestPrivate(NetworkManagerRequest::GetNetworkResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkResourcesRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetNetworkResourcesRequestPrivate
 * \brief The GetNetworkResourcesRequestPrivate class provides private implementation for GetNetworkResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkResourcesRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetNetworkResourcesRequestPrivate::GetNetworkResourcesRequestPrivate(
    const NetworkManagerRequest::Action action, GetNetworkResourcesRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkResourcesRequest
 * class' copy constructor.
 */
GetNetworkResourcesRequestPrivate::GetNetworkResourcesRequestPrivate(
    const GetNetworkResourcesRequestPrivate &other, GetNetworkResourcesRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
